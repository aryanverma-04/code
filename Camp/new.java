import java.util.Scanner;
public class matrix {
    public static void main(String[] args) {
        System.out.println("\n -----! Name: ARYAN VERMA       UID: 20BCS3651 !-----     \n" );
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Number of Participants (N): ");
        int n = in.nextInt();

        if (n <= 3 || n >= 11) {
            System.out.println("INPUT SIZE OUT OF RANGE.");
            return;
        }

        char a[][] = new char[n][5];
        char Z[] = new char[5];

        System.out.println("Enter a of participants");
        for (int i = 0; i < n; i++) {
            System.out.println("Participant " + (i+1));
            for (int j = 0; j < 5; j++) {
                a[i][j] = in.next().charAt(0);
            }
        }

        System.out.println("Enter Answer Z:");
        for (int i = 0; i < 5; i++) {
            Z[i] = in.next().charAt(0);
        }

        int _h_ = 0;
        int _s[] = new int[n];

        System.out.println("Scores:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                if (a[i][j] == Z[j]) {
                    _s[i]++;
                }
            }

            if (_s[i] > _h_) {
                _h_ = _s[i];
            }

            System.out.println("Participant " + (i+1) + " = " + _s[i]);
        }

        System.out.println("Highest _s:");
        for (int i = 0; i < n; i++) {
            if (_s[i] == _h_) {
                System.out.println("Participant " + (i+1));
            }
        }
            }
        }

