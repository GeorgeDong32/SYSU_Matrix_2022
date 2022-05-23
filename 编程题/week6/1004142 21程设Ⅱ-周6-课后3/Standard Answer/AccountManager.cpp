#include "AccountManager.hpp"
int AccountManager::ManagerNumber = 0;
AccountManager::AccountManager() : SuperVipAccount(NULL) {
    accountNumber = new int(0);
    ManagerNumber++;
}

AccountManager::AccountManager(const AccountManager& am) {
    *accountNumber = *(am.accountNumber);
    for (int i = 0; i < *accountNumber; i++) {
        accountlist[i] = am.accountlist[i];
    }
    if (am.SuperVipAccount) {
        SuperVipAccount = new Account(am.SuperVipAccount -> getName(),
            am.SuperVipAccount -> getBalance());
    } else {
        SuperVipAccount = NULL;
    }
    AccountManager::ManagerNumber++;
}

void AccountManager::open(string name) {
    if (*accountNumber == 100)
        return;

    Account *account = new Account(name, 0);
    accountlist[(*accountNumber)++] = *account;
    delete account;
}

void AccountManager::openSuperVipAccount(Account& ac) {
    SuperVipAccount = &ac;
}

void AccountManager::closeSuperVipAccount() {
    SuperVipAccount = NULL;
}

bool AccountManager::getBalanceOfSuperVipAccount(double& balance) const {
    if (SuperVipAccount) {
        balance = SuperVipAccount -> getBalance();
        return true;
    }
    return false;
}

void AccountManager::close(string name) {
    for (int i = 0; i < *accountNumber; i++) {
        if (accountlist[i].getName() == name) {
            if (i != *accountNumber-1) {
                accountlist[i] = accountlist[*accountNumber-1];
            }
            *accountNumber--;
            break;
        }
    }
}

void AccountManager::depositByName(string name, double num) {
    for (int i = 0; i < *accountNumber; i++) {
        if (accountlist[i].getName() == name) {
            accountlist[i].deposit(num);
            break;
        }
    }
}

bool AccountManager::withdrawByName(string name, double num) {
    for (int i = 0; i < *accountNumber; i++) {
        if (accountlist[i].getName() == name) {
            return accountlist[i].withdraw(num);
        }
    }
    return false;
}

double AccountManager::getBalanceByName(string name) {
    for (int i = 0; i < *accountNumber; i++) {
        if (accountlist[i].getName() == name) {
            return accountlist[i].getBalance();
        }
    }
    return 0;
}

Account AccountManager::getAccountByName(string name) {
    for (int i = 0; i < *accountNumber; i++) {
        if (accountlist[i].getName() == name) {
            return accountlist[i];
        }
    }
    return accountlist[99];
}

int AccountManager::getAccountNumber() const {
    return *accountNumber;
}

int AccountManager::getManagerNumber() const {
    return AccountManager::ManagerNumber;
}

AccountManager::~AccountManager() {
    AccountManager::ManagerNumber--;
    delete accountNumber;
}
