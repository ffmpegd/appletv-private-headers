/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (NSArchiverCallBack)
- (Class)classForArchiver;	// 0x3607e6a5
- (id)replacementObjectForArchiver:(id)archiver;	// 0x360ca515
@end

@interface NSObject (NSKeyValueCoding)
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3609ee89
+ (BOOL)accessInstanceVariablesDirectly;	// 0x36099051
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x360f157d
- (id)mutableArrayValueForKey:(id)key;	// 0x360f0c89
- (id)mutableArrayValueForKeyPath:(id)keyPath;	// 0x360f0f7d
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x360abba5
- (id)mutableOrderedSetValueForKeyPath:(id)keyPath;	// 0x360f10ad
- (id)mutableSetValueForKey:(id)key;	// 0x360f0d65
- (id)mutableSetValueForKeyPath:(id)keyPath;	// 0x360f11dd
- (void)setNilValueForKey:(id)key;	// 0x360f152d
- (void)setValue:(id)value forKey:(id)key;	// 0x360728fd
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x3606e5f9
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x360f141d
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x360f168d
- (BOOL)validateValue:(inout id *)value forKey:(id)key error:(out id *)error;	// 0x360f0bc1
- (BOOL)validateValue:(inout id *)value forKeyPath:(id)keyPath error:(out id *)error;	// 0x360f0e41
- (id)valueForKey:(id)key;	// 0x36071411
- (id)valueForKeyPath:(id)keyPath;	// 0x3606e4c9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x360f130d
@end

@interface NSObject (NSKeyValueCodingPrivate)
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3609f7e5
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3609fedd
+ (id)_createOtherValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x36099615
+ (id)_createOtherValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x360992b1
+ (id)_createValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3608afbd
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x36099435
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x360990d1
+ (id)_createValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3608f5d1
@end

@interface NSObject (NSKeyValueObserverNotifying)
- (BOOL)_isKVOA;	// 0x360f929d
@end

@interface NSObject (NSKeyValueObserving)
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x360f9d15
@end

@interface NSObject (NSKeyValueObserverRegistration)
- (void)_addObserver:(id)observer forProperty:(id)property options:(unsigned)options context:(void *)context;	// 0x36088115
- (void)_removeObserver:(id)observer forProperty:(id)property;	// 0x360bbeb9
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3608717d
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x360bbd6d
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x360bbbb9
@end

@interface NSObject (NSKeyValueObserverNotification)
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x360fa939
- (void)didChangeValueForKey:(id)key;	// 0x3606de6d
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x360fb1c1
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x360fa659
- (void)willChangeValueForKey:(id)key;	// 0x3606dcd5
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x360fae55
@end

@interface NSObject (NSKeyValueObservingCustomization)
@property(assign) void *observationInfo;	// G=0x3606de4d; S=0x36088fa5; converted property
+ (id)_keysForValuesAffectingValueForKey:(id)key;	// 0x36087fb9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3609e325
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x36087eb9
// converted property getter: - (void *)observationInfo;	// 0x3606de4d
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x36088fa5
@end

@interface NSObject (NSDeprecatedKeyValueObservingCustomization)
+ (void)setKeys:(id)keys triggerChangeNotificationsForDependentKey:(id)dependentKey;	// 0x360fb285
@end

@interface NSObject (NSKeyValueObservingPrivate)
+ (BOOL)_shouldAddObservationForwardersForKey:(id)key;	// 0x360bb50d
- (void)_changeValueForKey:(id)key key:(id)key2 key:(id)key3 usingBlock:(id)block;	// 0x36093015
- (void)_changeValueForKey:(id)key usingBlock:(id)block;	// 0x36092ff1
- (void)_didChangeValuesForKeys:(id)keys;	// 0x360fb845
- (id)_implicitObservationInfo;	// 0x3606de69
- (void)_notifyObserversForKeyPath:(id)keyPath change:(id)change;	// 0x360fb375
- (void)_willChangeValuesForKeys:(id)keys;	// 0x360fb72d
@end

@interface NSObject (NSKeyedArchiverObjectSubstitution)
+ (id)classFallbacksForKeyedArchiver;	// 0x3607e725
- (Class)classForKeyedArchiver;	// 0x3607e695
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x3607e435
@end

@interface NSObject (NSKeyedUnarchiverObjectSubstitution)
+ (Class)classForKeyedUnarchiver;	// 0x360a1381
@end

@interface NSObject (NSObject)
+ (BOOL)implementsSelector:(SEL)selector;	// 0x36107485
+ (BOOL)instancesImplementSelector:(SEL)selector;	// 0x36107419
+ (void)load;	// 0x36085d41
+ (void)setVersion:(int)version;	// 0x36096235
+ (int)version;	// 0x36107565
- (BOOL)_allowsDirectEncoding;	// 0x360b3125
- (id)awakeAfterUsingCoder:(id)coder;	// 0x36077ed9
- (Class)classForCoder;	// 0x3607e6b5
- (BOOL)implementsSelector:(SEL)selector;	// 0x361074f5
- (id)replacementObjectForCoder:(id)coder;	// 0x36076061
@end

@interface NSObject (NSDiscardableContentProxy)
- (id)autoContentAccessingProxy;	// 0x361075dd
@end

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target;	// 0x36095171
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3606c8f1
- (void)performSelector:(SEL)selector object:(id)object afterDelay:(double)delay;	// 0x36113859
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay;	// 0x3606d87d
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;	// 0x3606d8d9
@end

@interface NSObject (NSThreadPerformAdditions)
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x360997f9
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x3606fae1
- (void)performSelectorInBackground:(SEL)background withObject:(id)object;	// 0x360bf859
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x3606f7fd
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x3608f319
@end

@interface NSObject (NSObjectPortCoding)
+ (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c737d
- (Class)classForPortCoder;	// 0x361c7339
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c7349
@end
