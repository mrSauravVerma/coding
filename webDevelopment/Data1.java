import java.sql.*;

class Data1 {
    public static void main(String aa[]) {
        try {
            // 1. Load the driver
            Class.forName("oracle.jdbc.driver.OracleDriver");

            // 2. Create the connection
            Connection cn = DriverManager.getConnection(
                "jdbc:oracle:thin:@localhost:1521:XE", "SYSTEM", "admin"
            );

            // 3. Create statement
            Statement st = cn.createStatement();

            // 4. Execute query
            ResultSet rs = st.executeQuery("Select * from MCA_E");

            // 5. Retrieve result
            while (rs.next()) {
                System.out.println(rs.getString(1) + " " + rs.getString(2) + " " + rs.getString(3));
            }

            // 6. Close resources
            rs.close();
            st.close();
            cn.close();

        } catch (ClassNotFoundException e) {
            System.out.println("Oracle JDBC Driver not found!");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println("Database connection or query error!");
            e.printStackTrace();
        }
    }
}
