/* Copyright (c) 2010-2018 Sander Mertens
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BAKE_CONFIG_H_
#define BAKE_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

struct bake_config {
    const char *environment;
    const char *configuration;
    bool symbols;
    bool debug;
    bool optimizations;
    bool coverage;
    bool strict;
    ut_ll env_variables;
    ut_ll env_values;

    /* Set by configuration loader */
    char *home;
    char *target;
    char *home_bin;
    char *home_lib;
    char *target_bin;
    char *target_lib;
};

#ifdef __cplusplus
}
#endif

#endif