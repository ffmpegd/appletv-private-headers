/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SKPaymentInternal : NSObject <NSCopying> {
@private
	NSString *_productIdentifier;	// 4 = 0x4
	int _quantity;	// 8 = 0x8
	NSData *_requestData;	// 12 = 0xc
}
- (id)init;	// 0x33bb9239
- (id)copyWithZone:(NSZone *)zone;	// 0x33bb92f1
- (void)dealloc;	// 0x33bb9279
@end
