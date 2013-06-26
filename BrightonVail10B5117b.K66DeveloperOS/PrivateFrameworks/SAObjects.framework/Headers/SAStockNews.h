/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSDate;

@interface SAStockNews : SADomainObject {
}
@property(copy, nonatomic) NSDate *timeStamp;	// G=0x355abd35; S=0x355abd51; 
@property(copy, nonatomic) NSString *title;	// G=0x355abda1; S=0x355abdbd; 
@property(copy, nonatomic) NSString *url;	// G=0x355abe0d; S=0x355abe29; 
+ (id)news;	// 0x355abca5
+ (id)newsWithDictionary:(id)dictionary context:(id)context;	// 0x355abce9
- (id)encodedClassName;	// 0x355abc99
- (id)groupIdentifier;	// 0x355abc89
// declared property setter: - (void)setTimeStamp:(id)stamp;	// 0x355abd51
// declared property setter: - (void)setTitle:(id)title;	// 0x355abdbd
// declared property setter: - (void)setUrl:(id)url;	// 0x355abe29
// declared property getter: - (id)timeStamp;	// 0x355abd35
// declared property getter: - (id)title;	// 0x355abda1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355abe79
// declared property getter: - (id)url;	// 0x355abe0d
@end
