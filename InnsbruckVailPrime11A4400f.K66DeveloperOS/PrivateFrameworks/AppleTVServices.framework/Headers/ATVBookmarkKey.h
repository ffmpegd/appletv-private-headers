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
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x300c8df5; @synthesize=_identifier
@property(readonly, assign, nonatomic) ATVDataType *mediaType;	// G=0x300c8e05; @synthesize=_mediaType
- (id)initWithIdentifier:(id)identifier mediaType:(id)type;	// 0x300c8ca1
- (void).cxx_destruct;	// 0x300c8e15
- (id)description;	// 0x300c8d5d
// declared property getter: - (id)identifier;	// 0x300c8df5
// declared property getter: - (id)mediaType;	// 0x300c8e05
@end
