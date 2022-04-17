# Facade Patter Example

Every day, we face problems while sending or receiving files through internet.
It can be connection failure, loss of quality or even, the most annoying, wrong format.  

Every software requires a file format that can be different from others sites
requiring the client (ourselves) change the format before using theirs software.

In order to help change the file format in an easy and interactive way, we implemented
a software that receives the file, find its type (MIME type), output some formats that can be achieved
in this format.





Dá o arquivo -> Vê seu formato -> Pergunta qual o formato para ser transformado -> 
Usa o Façade

Use FactoryMethod or AbstractFatory to select Wich Façade should be used