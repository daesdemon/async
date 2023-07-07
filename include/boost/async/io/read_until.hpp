//
// Copyright (c) 2023 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_ASYNC_IO_READ_UNTIL_HPP
#define BOOST_ASYNC_IO_READ_UNTIL_HPP

#include <boost/async/promise.hpp>
#include <boost/async/io/stream.hpp>
#include <boost/async/io/buffers/dynamic_buffer_view.hpp>
#include <boost/core/detail/string_view.hpp>
#include <boost/container/pmr/vector.hpp>

namespace boost::async::io
{

BOOST_ASYNC_DECL promise<transfer_result> read_until(stream & source, buffers::dynamic_buffer_view buffer,
                                                     char delim, std::size_t chunk_size = 4096);
BOOST_ASYNC_DECL promise<transfer_result> read_until(stream & source, buffers::dynamic_buffer_view buffer,
                                                     core::string_view delim, std::size_t chunk_size = 4096);

}

#endif //BOOST_ASYNC_IO_READ_UNTIL_HPP
