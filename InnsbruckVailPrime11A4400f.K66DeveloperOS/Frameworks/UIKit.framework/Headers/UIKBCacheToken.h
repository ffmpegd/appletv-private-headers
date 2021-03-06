/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <ImageIO/NSObject.h>

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	float _scale;	// 12 = 0xc
	int _emptyFields;	// 16 = 0x10
	int _renderFlags;	// 20 = 0x14
}
@property(assign, nonatomic) int displayHint;	// G=0x2f863381; S=0x2f863385; 
@property(assign, nonatomic) int emptyFields;	// G=0x2f863ced; S=0x2f863cfd; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x2f863389; 
@property(retain, nonatomic) NSString *name;	// G=0x2f863ccd; S=0x2f863cdd; @synthesize=_name
@property(assign, nonatomic) int renderFlags;	// G=0x2f863d0d; S=0x2f863d1d; @synthesize=_renderFlags
@property(assign, nonatomic) int rowHint;	// G=0x2f863379; S=0x2f86337d; 
@property(assign, nonatomic) CGSize size;	// G=0x2f86335d; S=0x2f863375; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x2f4d915d; 
+ (id)tokenForKey:(id)key style:(XXStruct_Mg33RD)style;	// 0x2f863b71
+ (id)tokenForKey:(id)key style:(XXStruct_Mg33RD)style displayInsets:(UIEdgeInsets)insets;	// 0x2f863b91
+ (id)tokenForKeyMask:(id)keyMask style:(XXStruct_Mg33RD)style displayInsets:(UIEdgeInsets)insets;	// 0x2f863bd1
+ (id)tokenForKeyplane:(id)keyplane;	// 0x2f4c9e55
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x2f863c9d
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x2f863c5d
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x2f863c11
- (id)initWithComponents:(id)components name:(id)name;	// 0x2f4c9e71
- (id)initWithName:(id)name;	// 0x2f863339
- (int)_writeArray:(id)array toStr:(char *)str maxLen:(int)len;	// 0x2f863571
- (int)_writeEdgeInsets:(UIEdgeInsets)insets toStr:(char *)str maxLen:(int)len;	// 0x2f8634c5
- (int)_writeNumber:(float)number toStr:(char *)str;	// 0x2f8633f1
- (int)_writeString:(id)string toStr:(char *)str maxLen:(int)len;	// 0x2f86338d
- (id)copyWithZone:(NSZone *)zone;	// 0x2f86334d
- (void)dealloc;	// 0x2f4d0709
// declared property getter: - (int)displayHint;	// 0x2f863381
// declared property getter: - (int)emptyFields;	// 0x2f863ced
// declared property getter: - (BOOL)hasKey;	// 0x2f863389
// declared property getter: - (id)name;	// 0x2f863ccd
// declared property getter: - (int)renderFlags;	// 0x2f863d0d
// declared property getter: - (int)rowHint;	// 0x2f863379
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x2f863385
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x2f863cfd
// declared property setter: - (void)setName:(id)name;	// 0x2f863cdd
// declared property setter: - (void)setRenderFlags:(int)flags;	// 0x2f863d1d
// declared property setter: - (void)setRowHint:(int)hint;	// 0x2f86337d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x2f863375
// declared property getter: - (CGSize)size;	// 0x2f86335d
// declared property getter: - (id)string;	// 0x2f4d915d
- (id)stringForComponentArray:(id)componentArray additionalValues:(id)values;	// 0x2f8638a1
- (id)stringForConstruction:(id)construction;	// 0x2f8637ad
- (id)stringForKey:(id)key state:(int)state;	// 0x2f863995
- (id)stringForRenderFlags:(int)renderFlags lightKeyboard:(BOOL)keyboard;	// 0x2f863a95
- (id)stringForSplitState:(BOOL)splitState;	// 0x2f4c9ef9
- (id)stringForState:(int)state;	// 0x2f863a59
@end

