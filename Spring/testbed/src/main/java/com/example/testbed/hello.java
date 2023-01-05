package com.example.testbed;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class hello {
    char[] data = {'a', 'b', 'c', 'c'};
    String str = new String(data);
    @GetMapping("/hello")
    String sayHello(){
        return str;
    }

    @GetMapping("/error")
    String error(){
        return "error";
    }
}
