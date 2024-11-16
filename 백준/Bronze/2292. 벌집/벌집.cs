using System;

class Program {
    static void Main(){
        int cnt = 1;
        int layer = 1;
        int n;
        n = int.Parse(System.Console.ReadLine());

        while(n > cnt){
            cnt += 6*layer;
            layer++;
        }
        System.Console.WriteLine(layer);
    }
}