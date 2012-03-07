/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTDateCell : GQDTCell {
@private
	CFDateRef mDate;	// 16 = 0x10
	GQDTComputedFormatSpec *mComputedFormat;	// 20 = 0x14
}
- (CFStringRef)createStringValue;	// 0x30474871
- (CFDateRef)date;	// 0x30474741
- (void)dealloc;	// 0x30474985
- (CFStringRef)getDateFormat;	// 0x30474751
- (int)readAttributesForDateCell:(xmlTextReader *)dateCell processor:(id)processor;	// 0x30474ac9
@end

