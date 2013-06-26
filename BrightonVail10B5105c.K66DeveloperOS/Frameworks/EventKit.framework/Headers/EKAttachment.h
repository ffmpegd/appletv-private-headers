/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSString, NSURL, NSNumber;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x35b80715; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x35b8093d; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x35b80785; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x35b80731; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x35b807ed; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x35b807a1; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x35b807d1; 
- (id)init;	// 0x35b806a9
// declared property getter: - (id)URL;	// 0x35b80715
// declared property getter: - (id)UUID;	// 0x35b8093d
- (int)compareFileNames:(id)names;	// 0x35b80959
- (id)description;	// 0x35b80a0d
// declared property getter: - (id)fileFormat;	// 0x35b80785
// declared property getter: - (id)fileName;	// 0x35b80731
// declared property getter: - (id)fileSize;	// 0x35b807ed
// declared property getter: - (BOOL)isBinary;	// 0x35b807a1
- (BOOL)isEqual:(id)equal;	// 0x35b80995
// declared property getter: - (id)localURL;	// 0x35b807d1
@end
