using System.Runtime.InteropServices;


public class Converter
{
    [DllImport("markdown_tools.dll")]
    public static extern void generateLatex(string inName, string outName);
}

public class Program
{
    static void Main(string[] arg)
    {
        Console.WriteLine("Hello, World!");
    }
    
}

