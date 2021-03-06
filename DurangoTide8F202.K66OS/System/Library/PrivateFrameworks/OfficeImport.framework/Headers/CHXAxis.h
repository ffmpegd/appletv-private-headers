/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject {
}
+ (id)chdAxisFromXmlAxisElement:(xmlNode *)xmlAxisElement state:(id)state;	// 0x31a82d71
+ (int)chdAxisPositionFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x31a83a01
+ (int)chdCrossesFromXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x31a83b61
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode *)xmlTickLabelPositionElement;	// 0x31a83aa9
+ (int)chdTickMarkFromXmlTickMarkElement:(xmlNode *)xmlTickMarkElement;	// 0x31a93c7d
+ (Class)chxAxisClassWithXmlAxisElement:(xmlNode *)xmlAxisElement;	// 0x31a83589
+ (void)readScalingFromXmlScalingElement:(xmlNode *)xmlScalingElement axis:(id)axis state:(id)state;	// 0x31a838ed
@end

