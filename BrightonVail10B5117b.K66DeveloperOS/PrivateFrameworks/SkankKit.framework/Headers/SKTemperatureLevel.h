/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class NSTimer, DPTextLayer;

@interface SKTemperatureLevel : SKLayer {
	DPTextLayer *_statusLayer;	// 56 = 0x38
	DPTextLayer *_temperatureLayer;	// 60 = 0x3c
	int _currentTemp;	// 64 = 0x40
	int _lowTemp;	// 68 = 0x44
	int _highTemp;	// 72 = 0x48
	NSTimer *_timer;	// 76 = 0x4c
}
- (id)init;	// 0x356201dd
- (id)initWithLowTemp:(float)lowTemp highTemp:(float)temp;	// 0x35620075
- (void)dealloc;	// 0x356201f9
- (void)drawInContext:(CGContextRef)context;	// 0x356202d9
- (void)setBounds:(CGRect)bounds;	// 0x35620225
- (void)setHideStatus:(BOOL)status;	// 0x356204d5
- (void)updateTemperature:(id)temperature;	// 0x356202c9
@end

