/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIClassSwapper : NSObject {
@private
	NSString *className;	// 4 = 0x4
	id object;	// 8 = 0x8
}
@property(readonly, retain) NSString *className;	// G=0x3532a0fd; converted property
@property(readonly, retain) id object;	// G=0x3532a10d; converted property
+ (id)swapperForObject:(id)object withClassName:(id)className;	// 0x3532a0bd
- (id)initWithCoder:(id)coder;	// 0x35329f35
- (id)initWithObject:(id)object andClassName:(id)name;	// 0x35329e5d
// converted property getter: - (id)className;	// 0x3532a0fd
- (void)dealloc;	// 0x35329ed5
- (void)encodeWithCoder:(id)coder;	// 0x3532a02d
// converted property getter: - (id)object;	// 0x3532a10d
@end

