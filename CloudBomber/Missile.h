/* Copyright (c) 2012 Scott Lembcke and Howling Moon Software
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
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#import "cocos2d.h"
#import "ObjectiveChipmunk.h"

#import "ChipmunkSprite.h"

// Implementing <ChipmunkObject> means that you can add this
// object to a space with a single [space add:missile] call.
// All you need to do is implement the chipmunkObjects method.
@interface Missile : NSObject <ChipmunkObject>

@property(nonatomic, assign) BOOL isTracking;
@property(nonatomic, assign) cpVect target;

@property(nonatomic, retain) ChipmunkBody *body;
@property(nonatomic, retain) NSArray *chipmunkObjects;
@property(nonatomic, retain) ChipmunkSprite *sprite;

-(id)initWithPosition:(cpVect)pos andTarget:(cpVect)target;

@end
