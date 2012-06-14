/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHBulletState : NSObject {
@private
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x33fdf979; S=0x33fdfb49; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x33fdfab1
- (id)init;	// 0x33fe005d
- (CFStringRef)bulletChar:(int)aChar;	// 0x33fdfe69
- (int)bulletIndentForLevel:(int)level;	// 0x33fdfe0d
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x33fdfbe5
// converted property getter: - (int)currentLevel;	// 0x33fdf979
- (void)dealloc;	// 0x33fe001d
- (BOOL)hasNumberAtLevel:(int)level;	// 0x33fdff4d
- (int)labelTypeAtLevel:(int)level;	// 0x33fdfec5
- (id)listStyleAtLevel:(int)level;	// 0x33fdfd25
- (int)numberAtLevel:(int)level;	// 0x33fdff21
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x33fdfe95
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x33fdfe39
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x33fdfb49
- (void)setLabelType:(int)type level:(int)level;	// 0x33fdfef1
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x33fdfd65
- (void)setNumber:(int)number level:(int)level;	// 0x33fdff79
- (void)setTextIndent:(int)indent level:(int)level;	// 0x33fdfddd
- (void)setType:(int)type level:(int)level;	// 0x33fdffed
- (int)textIndentForLevel:(int)level;	// 0x33fdfdb1
- (int)typeAtlevel:(int)atlevel;	// 0x33fdffc1
@end
