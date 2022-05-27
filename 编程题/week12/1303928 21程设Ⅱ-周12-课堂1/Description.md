# 21程设Ⅱ-周12-课堂1

# Description


<div>&nbsp;</div>
<div style="text-indent: 21pt"><font size="3">Class A is defined as follows: </font></div>
<div>&nbsp;</div>
<div><span style="color: #0000ff"><font size="3">class A<br />
{<br />
public:<br />
&nbsp;&nbsp;&nbsp; A(int a0):a(a0) {}<br />
&nbsp;&nbsp;&nbsp; void show() { cout&lt;&lt;&quot;a=&quot;&lt;&lt;a&lt;&lt;endl; }<br />
private:<br />
&nbsp;&nbsp;&nbsp; int a;<br />
};<br />
</font></span></div>
<div>&nbsp;</div>
<div style="text-indent: 21pt"><font size="3">Class B inherits from A.&nbsp;Its<font color="#000000"> constructor has two parameters,&nbsp;with&nbsp;the first one for&nbsp;the member <span style="color: #0000ff">a</span> and the second for the member <span style="color: #0000ff">b</span>. Class B also redefines the <span style="color: #0000ff">show</span> function. Now you need to complete the definition of class B to&nbsp;produce the desired output.</font></font></div>
<div>&nbsp;</div>
<div><span style="color: #0000ff"><font size="3">class B<br />
{<br />
public:<br />
&nbsp;&nbsp;&nbsp; B(int, int);<br />
&nbsp;&nbsp;&nbsp; void show();<br />
private:<br />
&nbsp;&nbsp;&nbsp; int b;<br />
};</font></span></div>
<div>&nbsp;</div>
<div style="text-indent: 21pt"><font size="3">Your submitted&nbsp;source code should&nbsp;include the whole&nbsp;implementation of&nbsp;the class B, but without&nbsp;the class A.</font></div>
<div style="text-indent: 21pt"><font size="3">No main() function should be included.</font></div>
<div>&nbsp;</div>
<div><strong><font size="3">Note</font></strong><font size="3">: the main() function of the test framework&nbsp;looks like this: </font></div>
<div><font size="3">------------------------------------------------------------------------------</font></div>
<div><font size="3">int main()<br />
{<br />
&nbsp;&nbsp;&nbsp; B b(1, 2);<br />
&nbsp;&nbsp;&nbsp; b.show();<br />
&nbsp;&nbsp;&nbsp; return 0;<br />
}</font></div>
<div><font size="3">------------------------------------------------------------------------------</font></div>


# Sample_Ouput

```
a=1
b=2
```

