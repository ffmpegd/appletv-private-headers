/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject {
@private
	NSMutableDictionary *textAttributesForState;	// 4 = 0x4
}
- (void)dealloc;	// 0x35187ae5
- (void)setTextAttribute:(id)attribute forKey:(id)key state:(unsigned)state;	// 0x3532ac09
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x35252b21
- (id)textAttributeForKey:(id)key state:(unsigned)state;	// 0x3532ad41
- (id)textAttributesForState:(unsigned)state;	// 0x3517ecad
@end

