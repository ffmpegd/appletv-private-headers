/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import </libobjc.A.h>
#import "SpringBoardServices-Structs.h"


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

@interface NSObject (SBS)
+ (id)sbs_dataFromObject:(id)object;	// 0x32763f3d
+ (id)sbs_dataWithValue:(id)value;	// 0x327641f1
+ (id)sbs_objectFromData:(id)data;	// 0x3276403d
+ (BOOL)sbs_synchronousWrapper:(id)wrapper;	// 0x3276414d
+ (BOOL)sbs_synchronousWrapper:(id)wrapper dispatchTimeout:(unsigned long long)timeout;	// 0x327642a9
+ (BOOL)sbs_synchronousWrapper:(id)wrapper timeout:(double)timeout;	// 0x32764189
+ (id)sbs_valueFromData:(id)data ofType:(const char *)type;	// 0x32764261
- (BOOL)sbs_isPlistableType;	// 0x32763d81
@end

