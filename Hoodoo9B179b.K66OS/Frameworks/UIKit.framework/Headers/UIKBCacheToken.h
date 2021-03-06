/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _emptyFields;	// 12 = 0xc
}
@property(assign, nonatomic) int displayHint;	// G=0x3327a2bd; S=0x3327a2f5; 
@property(assign, nonatomic) int emptyFields;	// G=0x3327a999; S=0x3327a9a9; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x3327a341; 
@property(retain, nonatomic) NSString *name;	// G=0x3327a965; S=0x3327a975; @synthesize=_name
@property(assign, nonatomic) int rowHint;	// G=0x3327a239; S=0x3327a271; 
@property(assign, nonatomic) CGSize size;	// G=0x3327a155; S=0x3327a1b9; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x32fb50e9; 
+ (id)tokenForKey:(id)key style:(int)style state:(int)state;	// 0x32fb4dc1
+ (id)tokenForKeyplane:(id)keyplane;	// 0x3327a4e9
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x3327a7c5
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x3327a68d
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x3327a641
- (id)initWithComponents:(id)components name:(id)name;	// 0x32fb503d
- (id)initWithComponents:(id)components name:(id)name emptyFields:(int)fields;	// 0x32fb5061
- (id)copyWithZone:(NSZone *)zone;	// 0x3327a145
- (void)dealloc;	// 0x32fb5111
// declared property getter: - (int)displayHint;	// 0x3327a2bd
// declared property getter: - (int)emptyFields;	// 0x3327a999
// declared property getter: - (BOOL)hasKey;	// 0x3327a341
// declared property getter: - (id)name;	// 0x3327a965
// declared property getter: - (int)rowHint;	// 0x3327a239
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x3327a2f5
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x3327a9a9
// declared property setter: - (void)setName:(id)name;	// 0x3327a975
// declared property setter: - (void)setRowHint:(int)hint;	// 0x3327a271
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3327a1b9
// declared property getter: - (CGSize)size;	// 0x3327a155
// declared property getter: - (id)string;	// 0x32fb50e9
- (id)stringForKey:(id)key state:(int)state;	// 0x3327a399
- (id)stringForSplitState:(BOOL)splitState;	// 0x3327a495
- (id)stringForState:(int)state;	// 0x3327a459
@end

