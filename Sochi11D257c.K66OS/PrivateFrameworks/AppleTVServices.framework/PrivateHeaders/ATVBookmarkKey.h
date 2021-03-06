/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSString, ATVDataType;

@interface ATVBookmarkKey : NSObject {
	NSString *_identifier;	// 4 = 0x4
	ATVDataType *_mediaType;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x304555e1; @synthesize=_identifier
@property(readonly, assign, nonatomic) ATVDataType *mediaType;	// G=0x304555f1; @synthesize=_mediaType
- (id)initWithIdentifier:(id)identifier mediaType:(id)type;	// 0x3045548d
- (void).cxx_destruct;	// 0x30455601
- (id)description;	// 0x30455549
// declared property getter: - (id)identifier;	// 0x304555e1
// declared property getter: - (id)mediaType;	// 0x304555f1
@end

