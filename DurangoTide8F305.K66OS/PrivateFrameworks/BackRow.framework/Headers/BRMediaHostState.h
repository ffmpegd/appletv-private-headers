/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRMediaHostState : NSObject {
@private
	NSString *_description;	// 4 = 0x4
}
@property(readonly, retain) NSString *description;	// G=0x329139c9; converted property
+ (id)available;	// 0x32915ec1
+ (id)mountFailed;	// 0x329bfbb9
+ (id)mounted;	// 0x3291613d
+ (id)mounting;	// 0x32915f95
+ (id)unavailable;	// 0x329136a1
+ (id)unmounting;	// 0x32916069
- (id)initWithDescription:(id)description;	// 0x32913775
- (void)dealloc;	// 0x329bf8c9
// converted property getter: - (id)description;	// 0x329139c9
- (id)mediaHostEvent:(id)event forMediaHost:(id)mediaHost;	// 0x32916411
@end

