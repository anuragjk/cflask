#include <stdio.h>

void main(int argc, char** argv)
{
    CF_register_get_method(get_req_handler, inx);
//    CF_register_post_method(post_req_handler, cfObj);

    CF_start_server();

}



int get_req_handler(CF_instance_t *inx)
{
    switch(inx->pathId)
    {
        case INDEX:
            parse_index_data(data, index_data_list)      // User function for parsing list from data
            process_index_data(data)                     // User function linked to GET request
            CF_render_template(inx, index_data_list)     // Rendering page to dispaly
	    break;

        case ERROR_404:
        default:
            CF_render_template(ctx, "./error_404.html", NULL);
    }

    http_response(ctx);
}
