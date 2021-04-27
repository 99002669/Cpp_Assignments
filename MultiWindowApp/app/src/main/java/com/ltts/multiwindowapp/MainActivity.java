package com.ltts.multiwindowapp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu){
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item){
        int itemID = item.getItemId();
        switch (itemID){
            case R.id.action_minimise:
                Toast.makeText(getApplicationContext(),"Minimise",Toast.LENGTH_LONG).show();
                return true;
            case R.id.action_resize:
                Toast.makeText(getApplicationContext(),"Resize",Toast.LENGTH_LONG).show();
                return true;
            case R.id.action_close:
                Toast.makeText(getApplicationContext(),"Close",Toast.LENGTH_LONG).show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
        }
    }
}