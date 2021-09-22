#pragma once
#include <unordered_map>
#include <tuple>
#include <folly/Hash.h>

namespace langdetectpp { namespace profiles { namespace langs {

std::unordered_map<uint32_t, size_t> get_cy_one_grams();

std::unordered_map<std::tuple<uint32_t, uint32_t>, size_t> get_cy_bigrams();

std::unordered_map<std::tuple<uint32_t, uint32_t, uint32_t>, size_t> get_cy_trigrams();

std::tuple<size_t, size_t, size_t> get_cy_n_words();

}}} // langdetectpp::profiles::langs

