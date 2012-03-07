/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {
@private
	void *_attr;	// 4 = 0x4
	unsigned _refcount;	// 8 = 0x8
	unsigned _uid;	// 12 = 0xc
	void *_priv;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x31b38b39; S=0x31b38b21; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31b38b69; S=0x31b38b51; 
@property(copy) NSString *name;	// G=0x31b38b99; S=0x31b38b81; 
@property(copy) NSDictionary *style;	// G=0x31b38b09; S=0x31b38af1; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31b38a45
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x31b388b1
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x31b380e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31b38a75
+ (id)behavior;	// 0x31b38ab9
+ (id)defaultValueForKey:(id)key;	// 0x31b38a95
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x31b38a39
- (id)init;	// 0x31b388c5
- (id)initWithCoder:(id)coder;	// 0x31b38e29
- (void)_setCARenderBehavior:(Behavior *)behavior;	// 0x31b38e71
- (BOOL)allowsWeakReference;	// 0x31b380d1
- (id)copyWithZone:(NSZone *)zone;	// 0x31b38c61
- (void)dealloc;	// 0x31b38f3d
- (id)debugDescription;	// 0x31b38bb1
// declared property getter: - (id)delegate;	// 0x31b38b39
- (void)encodeWithCoder:(id)coder;	// 0x31b38e21
// declared property getter: - (BOOL)isEnabled;	// 0x31b38b69
// declared property getter: - (id)name;	// 0x31b38b99
- (void)release;	// 0x31b38f95
- (id)retain;	// 0x31b39105
- (unsigned)retainCount;	// 0x31b380c1
- (BOOL)retainWeakReference;	// 0x31b390c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31b38b21
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31b38b51
// declared property setter: - (void)setName:(id)name;	// 0x31b38b81
// declared property setter: - (void)setStyle:(id)style;	// 0x31b38af1
- (void)setValue:(id)value forKey:(id)key;	// 0x31b38db5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x31b38cdd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x31b38cf1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x31b38e31
// declared property getter: - (id)style;	// 0x31b38b09
- (id)valueForKey:(id)key;	// 0x31b38ded
- (id)valueForKeyPath:(id)keyPath;	// 0x31b38ce9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x31b38d6d
@end

