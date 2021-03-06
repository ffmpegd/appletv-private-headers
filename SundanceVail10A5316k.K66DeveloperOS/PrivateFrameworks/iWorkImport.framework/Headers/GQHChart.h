/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHChart : NSObject {
}
+ (CFStringRef)createChartImageUrlString:(id)string state:(id)state;	// 0x36c89511
+ (id)geometry:(id)geometry;	// 0x36c89351
+ (int)handleFloatingChart:(id)chart state:(id)state;	// 0x36c89365
+ (int)handleInlineChart:(id)chart state:(id)state;	// 0x36c894e5
+ (int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;	// 0x36c89591
+ (char *)pdfId:(id)anId;	// 0x36c8933d
+ (CFDataRef)renderChart:(id)chart;	// 0x36c89509
@end

