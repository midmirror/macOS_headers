//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSData, _INPBIntentResponse;

@protocol INIntentResponseExport <NSObject, JSExport>
@property(readonly, nonatomic) long long code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore;
- (long long)_intentHandlingStatus;
- (void)_setPayloadResponseMessageData:(NSData *)arg1;
- (NSData *)_payloadResponseMessageData;
- (id)init;
@end

