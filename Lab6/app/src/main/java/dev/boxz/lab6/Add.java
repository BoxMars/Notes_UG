package dev.boxz.lab6;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class Add extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_add);

        TextView id=findViewById(R.id.idEditTextView);
        TextView name=findViewById(R.id.nameEditTextView);
        TextView year=findViewById(R.id.yearEditTextView);
        TextView author=findViewById(R.id.authorTtextView);
        Button add=findViewById(R.id.addButton);
        add.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Book book=new Book();
                book.setId(id.getText().toString());
                book.setAuthor(author.getText().toString());
                book.setName(name.getText().toString());
                book.setYear(year.getText().toString());
                book.save();
                finish();
            }
        });
    }

}