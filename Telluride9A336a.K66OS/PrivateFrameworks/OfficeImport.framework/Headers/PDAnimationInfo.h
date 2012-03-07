/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimationInfoData;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject {
@private
	PDAnimationInfoData *mEntrance;	// 4 = 0x4
	PDAnimationInfoData *mExit;	// 8 = 0x8
	PDAnimationInfoData *mMedia;	// 12 = 0xc
}
@property(retain) id entranceData;	// G=0x34da7c1d; S=0x34da7c8d; converted property
@property(retain) id exitData;	// G=0x34da7c2d; S=0x34da7ccd; converted property
@property(retain, nonatomic) PDAnimationInfoData *mediaData;	// G=0x34da7c3d; S=0x34da85ad; @synthesize=mMedia
- (void)dealloc;	// 0x34da8539
// converted property getter: - (id)entranceData;	// 0x34da7c1d
// converted property getter: - (id)exitData;	// 0x34da7c2d
// declared property getter: - (id)mediaData;	// 0x34da7c3d
// converted property setter: - (void)setEntranceData:(id)data;	// 0x34da7c8d
// converted property setter: - (void)setExitData:(id)data;	// 0x34da7ccd
// declared property setter: - (void)setMediaData:(id)data;	// 0x34da85ad
@end
