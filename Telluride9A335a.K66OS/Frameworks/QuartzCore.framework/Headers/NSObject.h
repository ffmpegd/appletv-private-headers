/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface NSObject (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x3357bc69
- (void)CA_prepareRenderValue;	// 0x335a2055
@end

@interface NSObject (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x3362a6d5
- (float)CA_distanceToValue:(id)value;	// 0x3362a8ad
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x3362a785
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x3362a619
@end

@interface NSObject (_CAObjectInternal)
+ (id)CA_CAMLPropertyForKey:(id)key;	// 0x33630eed
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x33630ee9
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x3359b721
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x33630ee5
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x33630ee1
@end

