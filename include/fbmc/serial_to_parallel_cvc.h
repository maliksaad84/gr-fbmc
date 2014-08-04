/* -*- c++ -*- */
/* 
 * Copyright 2014 Communications Engineering Lab (CEL), Karlsruhe Institute of Technology (KIT).
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_FBMC_SERIAL_TO_PARALLEL_CVC_H
#define INCLUDED_FBMC_SERIAL_TO_PARALLEL_CVC_H

#include <fbmc/api.h>
#include <gnuradio/sync_decimator.h>

namespace gr {
  namespace fbmc {

    /*!
     * \brief Takes len_in input samples and transforms them into a vector of length vlen_out, padded with zeros if len_in < vlen_out
     * \ingroup fbmc
     *
     */
    class FBMC_API serial_to_parallel_cvc : virtual public gr::sync_decimator
    {
     public:
      typedef boost::shared_ptr<serial_to_parallel_cvc> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of fbmc::serial_to_parallel_cvc.
       *
       * To avoid accidental use of raw pointers, fbmc::serial_to_parallel_cvc's
       * constructor is in a private implementation
       * class. fbmc::serial_to_parallel_cvc::make is the public interface for
       * creating new instances.
       */
      static sptr make(int len_in, int vlen_out, std::vector<int> channel_map);
    };

  } // namespace fbmc
} // namespace gr

#endif /* INCLUDED_FBMC_SERIAL_TO_PARALLEL_CVC_H */

