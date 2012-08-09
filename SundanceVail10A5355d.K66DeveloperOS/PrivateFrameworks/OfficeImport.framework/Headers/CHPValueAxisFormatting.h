/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"


@interface CHPValueAxisFormatting : EDProcessor {
}
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x31cfea89
- (id)dataPointFormattingInData:(id)data;	// 0x31cfee55
- (id)dataPointFormattingInSeriesCollection:(id)seriesCollection;	// 0x31cfed8d
- (id)dataPointFormattingInSources:(id)sources;	// 0x31d03869
- (bool)isObjectSupported:(id)supported;	// 0x31cfab75
- (bool)isPercentageFormattingInContentFormatString:(id)contentFormatString edValue:(EDValue *)value;	// 0x31cfef31
@end
