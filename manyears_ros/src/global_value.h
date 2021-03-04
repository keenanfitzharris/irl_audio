#ifndef GLOBAL_VALUE_H_
#define GLOBAL_VALUE_H_

extern "C"{
#include <parameters.h>
}
#include <string>

namespace manyears_global
{

	
	static const int sample_rate_s = 144000; //48000 samples/sec
	static const int samples_per_frame_s = GLOBAL_FRAMESIZE * GLOBAL_OVERLAP; //512
	static const int nb_microphones_s = 7; //7
	static const unsigned int raw_buffer_size_s = 3584;
	static const std::string microphones_frame_s = "micro_center_link";

}

#endif
