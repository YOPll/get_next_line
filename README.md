<p align="center">
<a href="https://github.com/YOPll/get_next_line">
  <img src="https://user-images.githubusercontent.com/49567393/145694296-91b27fdf-3666-4670-8a84-23695c2be1a4.png" alt="ft_printf 100/100">
</a>
  <br>
  100/100
</p>

# Introduction to get_next_line
Get Next Line is an individual project at [1337](1337.ma) *#42network* that requires us to create a function similar to the getline from CPP and fgets from C. This function allows a file to be read line after line if called in a loop.

### Prototype
`char	*get_next_line(int fd);`
### Description
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.
### External functs
`read`, `malloc`, `free`.

See the subjects for further information

[SUBJECT](Subject/en.subject.pdf)

## Functions table reference
The functions present in the utils are from the [Libft](https://github.com/yopll/LIBFT) with some code optimizations.

<table>
    <thead>
        <tr>
            <th colspan=3><h4>GNL Utils Functions</h4></th>
        </tr>
        <tr>
            <th>Name</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=get_next_line.c>ft_checker</a></td>
            <td>checks if the static variable has content on it and calculate the length of the the line.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>ft_backup</a></td>
            <td>delete the printed line.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>ft_putline</a></td>
            <td>Returns a string from a buffer.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>get_next_line</a></td>
            <td>Reads a line from a file descriptor.</td>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Libft Functions</h4></th>
        </tr>
        <tr>
            <th>Name</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strlen</a></td>
            <td>Computes the length of the string but not including the terminating null character.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strdup</a></td>
            <td>Returns a pointer to a null-terminated byte string, which is a duplicate of the string.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_substr</a></td>
            <td>Converts the string to an integer (type int).</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_memmove</a></td>
            <td>copies n bytes from memory area src to memory area dest, returns a pointer to dest.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strjoin</a></td>
            <td>Returns a new string, which is the result of the concatenation of 's1' and 's2'.</td>
        </tr>
    </tbody>
</table>
