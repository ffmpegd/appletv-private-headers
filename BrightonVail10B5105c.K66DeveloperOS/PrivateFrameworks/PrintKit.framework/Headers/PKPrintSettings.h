/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {
	NSMutableDictionary *_dict;	// 4 = 0x4
	PKPaper *paper;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableDictionary *dict;	// G=0x35912a81; S=0x35912a91; @synthesize=_dict
@property(retain, nonatomic) PKPaper *paper;	// G=0x35912aa1; S=0x35912ab1; @synthesize
+ (id)default;	// 0x35912829
+ (id)photo;	// 0x359128d1
+ (id)printSettingsForPrinter:(id)printer;	// 0x359129a9
- (id)init;	// 0x3591274d
- (void)dealloc;	// 0x359126f5
// declared property getter: - (id)dict;	// 0x35912a81
- (id)objectForKey:(id)key;	// 0x35912809
// declared property getter: - (id)paper;	// 0x35912aa1
- (void)removeObjectForKey:(id)key;	// 0x359127e9
// declared property setter: - (void)setDict:(id)dict;	// 0x35912a91
- (void)setObject:(id)object forKey:(id)key;	// 0x359127c9
// declared property setter: - (void)setPaper:(id)paper;	// 0x35912ab1
- (id)settingsDict;	// 0x359127b9
@end
