/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *imageName;	// 8 = 0x8
	unsigned short unicodeCharacter;	// 12 = 0xc
	NSString *codePoint;	// 16 = 0x10
	NSString *privateCodePoint;	// 20 = 0x14
	NSString *publicCodePoint;	// 24 = 0x18
}
@property(retain) NSString *codePoint;	// G=0x3534568d; S=0x353456a1; @synthesize
@property(retain) NSString *imageName;	// G=0x35345635; S=0x35345649; @synthesize
@property(readonly, assign) NSString *key;	// G=0x353455ed; 
@property(retain) NSString *name;	// G=0x353455fd; S=0x35345611; @synthesize
@property(retain) NSString *privateCodePoint;	// G=0x353456c5; S=0x353456d9; @synthesize
@property(retain) NSString *publicCodePoint;	// G=0x353456fd; S=0x35345711; @synthesize
@property(assign) unsigned short unicodeCharacter;	// G=0x3534566d; S=0x3534567d; @synthesize
+ (BOOL)shouldUsePublicCodePoints;	// 0x353455e9
- (id)initWithName:(id)name imageName:(id)name2 codePoint:(unsigned short)point;	// 0x353453c5
// declared property getter: - (id)codePoint;	// 0x3534568d
- (void)dealloc;	// 0x35345555
- (id)image;	// 0x3534551d
// declared property getter: - (id)imageName;	// 0x35345635
// declared property getter: - (id)key;	// 0x353455ed
// declared property getter: - (id)name;	// 0x353455fd
// declared property getter: - (id)privateCodePoint;	// 0x353456c5
// declared property getter: - (id)publicCodePoint;	// 0x353456fd
// declared property setter: - (void)setCodePoint:(id)point;	// 0x353456a1
// declared property setter: - (void)setImageName:(id)name;	// 0x35345649
// declared property setter: - (void)setName:(id)name;	// 0x35345611
// declared property setter: - (void)setPrivateCodePoint:(id)point;	// 0x353456d9
// declared property setter: - (void)setPublicCodePoint:(id)point;	// 0x35345711
// declared property setter: - (void)setUnicodeCharacter:(unsigned short)character;	// 0x3534567d
// declared property getter: - (unsigned short)unicodeCharacter;	// 0x3534566d
@end

