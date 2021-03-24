package dev.boxz.lab6;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.List;

public class MyAdapter extends RecyclerView.Adapter<RecyclerView.ViewHolder> {

    List<Book> bookList;

    public MyAdapter(List<Book> bookList) {
        this.bookList = bookList;
    }

    @NonNull
    @Override
    public RecyclerView.ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view= LayoutInflater.from(parent.getContext()).inflate(R.layout.book,parent,false);
        RecyclerView.ViewHolder viewHolder=new RecyclerView.ViewHolder(view){};

        return viewHolder;
    }

    @Override
    public void onBindViewHolder(@NonNull RecyclerView.ViewHolder holder, int position) {
        Book book=bookList.get(position);

        TextView idTextView=holder.itemView.findViewById(R.id.idTextView);
        TextView authorTtextView=holder.itemView.findViewById(R.id.authorTtextView);
        TextView nameTextView=holder.itemView.findViewById(R.id.nameTextView);
        TextView yearTextView=holder.itemView.findViewById(R.id.yearTextView);

        idTextView.setText(book.getId());
        authorTtextView.setText(book.getAuthor());
        nameTextView.setText(book.getName());
        yearTextView.setText(book.getYear());
    }

    @Override
    public int getItemCount() {
        return bookList.size();
    }
}
