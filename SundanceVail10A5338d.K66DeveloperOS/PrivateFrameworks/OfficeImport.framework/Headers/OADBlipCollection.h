/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADBlipCollection : NSObject {
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x33a3f475; S=0x33b9baad; @synthesize=mBlips
- (id)init;	// 0x33957fd9
- (unsigned long)addBlip:(id)blip;	// 0x3396cc35
- (id)blipAtIndex:(long)index;	// 0x339ce2e1
- (unsigned long)blipCount;	// 0x33b9ba8d
// declared property getter: - (id)blips;	// 0x33a3f475
- (void)dealloc;	// 0x339deb81
// declared property setter: - (void)setBlips:(id)blips;	// 0x33b9baad
@end
