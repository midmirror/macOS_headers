//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFOAuth2Manager.h"

@class AFOAuthCredential, NSDictionary;

@interface HRGfycatAPIManager : AFOAuth2Manager
{
    BOOL _anonymous;
    AFOAuthCredential *_credential;
    NSDictionary *_loggedInUser;
}

+ (id)shared;
@property(retain, nonatomic) NSDictionary *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(retain, nonatomic) AFOAuthCredential *credential; // @synthesize credential=_credential;
@property(nonatomic, getter=isAnonymous) BOOL anonymous; // @synthesize anonymous=_anonymous;
- (void).cxx_destruct;
- (id)searchGfycatTags;
- (id)searchGfycatStickers:(id)arg1;
- (id)informationForGfyname:(id)arg1;
- (id)usersGfycatsWithParameters:(id)arg1;
- (id)usersInformation;
- (id)isGfycatReady:(id)arg1;
- (id)waitForEncodedGfy:(id)arg1 currentCheck:(long long)arg2 maxChecks:(long long)arg3;
- (id)waitForEncodedGfy:(id)arg1 maxChecks:(long long)arg2;
- (id)createGfycatWithFileURL:(id)arg1 parameters:(id)arg2 gfyNameUpdate:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (id)createGfycatWithFileURL:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)uploadFile:(id)arg1 toGfyname:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)createNewGfycatIdentifierWithParameters:(id)arg1;
- (id)authenticateUsingOAuthWithURLString:(id)arg1 refreshToken:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)refreshCredentials;
- (id)logOut;
- (id)anonymousLogin;
- (id)loginWithFacebookAccessToken:(id)arg1;
- (id)loginWithUsername:(id)arg1 password:(id)arg2;
- (id)_checkValidUsername:(id)arg1;
- (id)checkValidUsername:(id)arg1;
- (id)_signupWithInfo:(id)arg1;
- (id)_signupWithUsername:(id)arg1 password:(id)arg2 facebookToken:(id)arg3;
- (id)signupWithUsername:(id)arg1 password:(id)arg2 facebookToken:(id)arg3;
- (id)_signupWithUsername:(id)arg1 password:(id)arg2 email:(id)arg3;
- (id)signupWithUsername:(id)arg1 password:(id)arg2 email:(id)arg3;
- (id)getCredential;
- (id)GET:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic, getter=isCredentialed) BOOL credentialed;
@property(readonly, nonatomic, getter=isLoggedIn) BOOL loggedIn;

@end

