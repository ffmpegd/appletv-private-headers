/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject {
@private
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x35675b71; S=0x3577e709; @synthesize=mBlips
- (id)init;	// 0x3558bc39
- (unsigned long)addBlip:(id)blip;	// 0x3559e869
- (id)blipAtIndex:(long)index;	// 0x355a7b15
- (unsigned long)blipCount;	// 0x3577e6e9
// declared property getter: - (id)blips;	// 0x35675b71
- (void)dealloc;	// 0x35571955
// declared property setter: - (void)setBlips:(id)blips;	// 0x3577e709
@end

