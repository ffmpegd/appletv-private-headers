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
	void *_attr;	// 4 = 0x4
	unsigned _refcount;	// 8 = 0x8
	unsigned _uid;	// 12 = 0xc
	void *_priv;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x33d75831; S=0x33d75849; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x33d75801; S=0x33d75819; 
@property(copy) NSString *name;	// G=0x33d757d1; S=0x33d757e9; 
@property(copy) NSDictionary *style;	// G=0x33d75861; S=0x33d75879; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x33d74eb5
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x33d757b1
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x33d757a1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33d74e95
+ (id)behavior;	// 0x33d747d9
+ (id)defaultValueForKey:(id)key;	// 0x33d74811
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x33d757c5
- (id)init;	// 0x33d74835
- (id)initWithCoder:(id)coder;	// 0x33d74d45
- (void)_setCARenderBehavior:(Behavior *)behavior;	// 0x33d74ba9
- (BOOL)allowsWeakReference;	// 0x33d74b3d
- (id)copyWithZone:(NSZone *)zone;	// 0x33d74ee5
- (void)dealloc;	// 0x33d74b55
- (id)debugDescription;	// 0x33d74f59
// declared property getter: - (id)delegate;	// 0x33d75831
- (void)encodeWithCoder:(id)coder;	// 0x33d74d4d
// declared property getter: - (BOOL)isEnabled;	// 0x33d75801
// declared property getter: - (id)name;	// 0x33d757d1
- (oneway void)release;	// 0x33d74a15
- (id)retain;	// 0x33d749a1
- (unsigned)retainCount;	// 0x33d74b2d
- (BOOL)retainWeakReference;	// 0x33d749d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33d75849
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x33d75819
// declared property setter: - (void)setName:(id)name;	// 0x33d757e9
// declared property setter: - (void)setStyle:(id)style;	// 0x33d75879
- (void)setValue:(id)value forKey:(id)key;	// 0x33d74d89
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x33d74e89
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x33d74e09
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x33d74d05
// declared property getter: - (id)style;	// 0x33d75861
- (id)valueForKey:(id)key;	// 0x33d74d55
- (id)valueForKeyPath:(id)keyPath;	// 0x33d74e81
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x33d74dc1
@end
