//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentStatmentRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_emailAddress;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

