/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject {
@private
	NSMutableDictionary *mColors;	// 4 = 0x4
}
- (id)init;	// 0x32bcc091
- (void)addColor:(id)color index:(int)index;	// 0x32bf43f5
- (unsigned)colorCount;	// 0x32c69301
- (id)colorForIndex:(int)index;	// 0x32b1a269
- (void)dealloc;	// 0x32b141e9
@end
