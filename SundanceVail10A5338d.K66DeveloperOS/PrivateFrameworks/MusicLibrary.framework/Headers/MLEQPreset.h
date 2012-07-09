/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MLEQPreset : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_localizedName;	// 8 = 0x8
	int _builtInPresetType;	// 12 = 0xc
}
@property(readonly, assign) int builtInPresetType;	// G=0x30acddb1; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x30acdd9d; converted property
@property(readonly, retain) NSString *name;	// G=0x30acdd89; converted property
+ (id)eqPresetForBuiltInPresetType:(int)presetType;	// 0x30acdc85
+ (id)eqPresetForName:(id)name;	// 0x30abbc29
- (id)initWithBuiltInPresetType:(int)presetType;	// 0x30acdbf1
- (void).cxx_destruct;	// 0x30acdddd
// converted property getter: - (int)builtInPresetType;	// 0x30acddb1
// converted property getter: - (id)localizedName;	// 0x30acdd9d
// converted property getter: - (id)name;	// 0x30acdd89
- (int)typeForAVController;	// 0x30acddc1
@end
