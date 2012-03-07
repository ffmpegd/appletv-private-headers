/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface NSObject (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x3129fc69
- (void)CA_prepareRenderValue;	// 0x312c6055
@end

@interface NSObject (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x3134e6d5
- (float)CA_distanceToValue:(id)value;	// 0x3134e8ad
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x3134e785
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x3134e619
@end

@interface NSObject (_CAObjectInternal)
+ (id)CA_CAMLPropertyForKey:(id)key;	// 0x31354eed
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31354ee9
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x312bf721
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x31354ee5
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x31354ee1
@end

