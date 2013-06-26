/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKBKeyplane, UIKBKey;

@interface UIKBKeyCacheEntry : NSObject {
	UIKBKey *m_key;	// 4 = 0x4
	UIKBKeyplane *m_keyplane;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) UIKBKey *key;	// G=0x32e03b15; @synthesize=m_key
@property(readonly, assign, nonatomic) UIKBKeyplane *keyplane;	// G=0x32e03b25; @synthesize=m_keyplane
+ (id)entryWithKey:(id)key keyPlane:(id)plane;	// 0x32e03a75
- (id)initWithKey:(id)key keyPlane:(id)plane;	// 0x32e03ac1
// declared property getter: - (id)key;	// 0x32e03b15
// declared property getter: - (id)keyplane;	// 0x32e03b25
@end
