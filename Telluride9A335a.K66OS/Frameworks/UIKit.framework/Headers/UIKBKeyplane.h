/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class UIKBIdentifierList, NSArray, NSString, NSMutableArray, UIKBAttributeList;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylayouts;	// 8 = 0x8
	UIKBAttributeList *m_attributes;	// 12 = 0xc
	UIKBIdentifierList *m_supportedTypes;	// 16 = 0x10
	NSArray *m_keys;	// 20 = 0x14
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x33c8344d; S=0x33c8345d; @synthesize=m_attributes
@property(retain, nonatomic) NSArray *keylayouts;	// G=0x33c83419; S=0x33c83429; @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x33c82ab5; 
@property(readonly, assign, nonatomic) NSArray *keysOrderedByPosition;	// G=0x33c82c71; 
@property(retain, nonatomic) NSString *name;	// G=0x33c833e5; S=0x33c833f5; @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList *supportedTypes;	// G=0x33c83481; S=0x33c83491; @synthesize=m_supportedTypes
+ (id)keyplane;	// 0x33c8239d
- (id)init;	// 0x33c823e5
- (id)initWithCoder:(id)coder;	// 0x33c82589
- (id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;	// 0x33c82449
- (id)alternateKeyplaneName;	// 0x33c83025
// declared property getter: - (id)attributes;	// 0x33c8344d
- (id)copyWithZone:(NSZone *)zone;	// 0x33c826e9
- (void)dealloc;	// 0x33c824ed
- (id)description;	// 0x33c82f45
- (void)encodeWithCoder:(id)coder;	// 0x33c82651
- (BOOL)isShiftKeyPlaneChooser;	// 0x33c83161
- (BOOL)isShiftKeyplane;	// 0x33c830c5
- (id)keylayoutWithName:(id)name;	// 0x33c828ad
// declared property getter: - (id)keylayouts;	// 0x33c83419
// declared property getter: - (id)keys;	// 0x33c82ab5
- (id)keysByKeyName:(id)name;	// 0x33c82e49
// declared property getter: - (id)keysOrderedByPosition;	// 0x33c82c71
- (void)layoutInRect:(CGRect)rect;	// 0x33c8296d
- (BOOL)looksLike:(id)like;	// 0x33c82a21
- (BOOL)looksLikeShiftAlternate;	// 0x33c82a81
// declared property getter: - (id)name;	// 0x33c833e5
- (BOOL)notUseCandidateSelection;	// 0x33c8312d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33c8345d
// declared property setter: - (void)setKeylayouts:(id)keylayouts;	// 0x33c83429
// declared property setter: - (void)setName:(id)name;	// 0x33c833f5
// declared property setter: - (void)setSupportedTypes:(id)types;	// 0x33c83491
- (id)shiftAlternateKeyplaneName;	// 0x33c83075
- (BOOL)shouldSkipCandidateSelection;	// 0x33c830f9
// declared property getter: - (id)supportedTypes;	// 0x33c83481
- (BOOL)supportsType:(int)type;	// 0x33c831fd
- (BOOL)usesAdaptiveKeys;	// 0x33c83195
- (BOOL)usesAutoShift;	// 0x33c82ff1
- (BOOL)usesKeyCharging;	// 0x33c831c9
@end

