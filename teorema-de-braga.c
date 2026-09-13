                                         #if !defined(__linux__)|| !defined(__x86_64__)
                                  #error "Este programma requer Linux na architectura x86_64."
                                                             #endif
                                                     #define _y_cria 8192UL
                                                     #define _crl_e 4096UL
                                               #define _passa_a_visao_crl 0x5401L
                                                 #define ____passa_a_visao 512U
                                                      #define e__slc 999UL
                                                      #define foda___ 96U
                                                  #define e_passa_a_visao 64U
                                          #define passa_a_visao_y (2U*e_passa_a_visao)
                                                 #define vz_passa_a_visao_ 128U
                                        #define crl_passa_a_visao (vz_passa_a_visao_+8U)
                                              #define _____passa_a_visao (1U<<18)
                                                    #define slc_vz_ (1U<<23)
                                                  #define _slc_qwerty (1U<<20)
                                                    #define cria______ (-1)
                                                  #define passa_a_visao_vz 0U
                                                     #define slc_crl 0x3FFU
                                                    #define _cria_fodase 0U
                                                      #define y__qwerty 1U
                                                      #define foda_slc_ 2U
                                                     #define _fodase_crl 3U
                                                 #define _foda_qwerty (1U<<20)
                                                 #define __y_qwerty 20000000UL
                                                   #define foda_qwerty 1024U
                                                  #define qwerty_fodase_ 64UL
                                                       #define y_crl_ 12U
                                               #define _qwerty_passa_a_visao 60U
                                                      #define e_crl__ 16U
                                                 #define __e_cria (foda___/2U)

static long y_crl(const char*_foda,unsigned long passa_a_visao___);static int y_slc(void);static int fodase(const char*_foda);
           static  long
                                                                                         _fodase_passa_a_visao
(    char*   crl_,                                                                       unsigned      long y_cria)  ;
             static    void
                                                                                   cria_passa_a_visao
(    int
             fodase_passa_a_visao_
)__attribute__((noreturn));static char _crl_y[_y_cria];static unsigned long fodase_y;static int y_cria_= -1;static char crl_y_[


                                                               _crl_e
                                                              ];
                                                            static
                                                           unsigned
                                                          long vz_y;
                                                        static unsigned
                                                       long crl_e_;static
                                                      long vz_e(long
                                                    _passa_a_visao_e,long
                                                   passa_a_visao_e_,long
                                                 _passa_a_visao_foda,long
                                                passa_a_visao_foda_){long
                                               _crl_foda;__asm__ volatile("sysca"
                                             "ll":"=a"(_crl_foda):"a"(
                                            _passa_a_visao_e),"D"(passa_a_visao_e_),
                                           "S"(_passa_a_visao_foda),"d"(
                                         passa_a_visao_foda_):"rcx","r11","memory");
                                        return _crl_foda;}static long crl_foda_(const
                                       char*_foda,unsigned long passa_a_visao___){
                                     unsigned long fodase_e=0;while(fodase_e<
                                    passa_a_visao___){long _y_vz=vz_e(1,1,(long)(_foda+
                                   fodase_e),(long)(passa_a_visao___-fodase_e));if(_y_vz== -4
                                 ){continue;}if(_y_vz<=0){return-1;}fodase_e+=(unsigned long)
                                _y_vz;}return(long)fodase_e;}static int y_slc(void){unsigned
                              long _passa_a_visao                              =fodase_y;fodase_y=
                             0;if(                                                   _passa_a_visao
                            ==0){return                     0;}                         return
                          crl_foda_(                      _crl_y,
                         _passa_a_visao
                        )<0?-1:0;}                        static int
                      _passa_a_visao_fodase
                     (void){if(y_cria_<0                    ){char
                    passa_a_visao_fodase_[                                           64];y_cria_=vz_e(16,1,
                  _passa_a_visao_crl,(long)                                     passa_a_visao_fodase_)==0;}
                 return y_cria_;}static long y_crl(const char*    _foda,unsigned long passa_a_visao___){int
                _crl_fodase=0;if(passa_a_visao___>_y_cria){if(y_slc()<0||crl_foda_(_foda,passa_a_visao___)<0){
              return-1;}return(long)passa_a_visao___;}if(fodase_y+passa_a_visao___>_y_cria&&y_slc()<0){return-1;}
             for(unsigned long y=0;y<passa_a_visao___;++y){_crl_y[fodase_y+y]=_foda[y];_crl_fodase|=_foda[y]=='\n';
           }fodase_y+=passa_a_visao___;if(_crl_fodase&&_passa_a_visao_fodase()&&y_slc()<0){return-1;}return(long)
          passa_a_visao___;}static int fodase(const char*_foda){unsigned long y_vz_=0;while(_foda[y_vz_]!='\0'){++
         y_vz_;}return y_crl(_foda,y_vz_)<0?-1:0;}static long passa_a_visao_crl_(void){for(;;){long foda______=vz_e(0,0
       ,(long)crl_y_,(long)_crl_e);if(foda______== -4){continue;}if(foda______<0){return-1;}vz_y=0;crl_e_=(unsigned long)
      foda______;return foda______;}}static long _fodase_passa_a_visao(char*crl_,unsigned long y_cria){unsigned long
     ____crl=0;int crl_fodase_=0;char _crl_slc='\0';crl_[0]='\0';y_slc();for(;;){char vz_foda;if(vz_y==crl_e_){long
   foda______=passa_a_visao_crl_();if(foda______<0){crl_[0]='\0';return-2;}if(foda______==0){if(____crl==0){return-1;}break;}
  }vz_foda=crl_y_[vz_y];++vz_y;if(vz_foda=='\n'){if(____crl>0&&_crl_slc=='\r'){--____crl;}break;}_crl_slc=vz_foda;if(____crl<


                                                    y_cria){if(____crl<y_cria
                                                      -1){crl_[____crl]=vz_foda;
                                                        }++____crl;}else{crl_fodase_
                                                         =1;}}if(crl_fodase_||____crl>=
                                                           y_cria){crl_[0]='\0';
                                                             return-3;}crl_[____crl]=     '\0';
                                                               return(long)____crl;}
                                                                 static void cria_passa_a_visao(int
                                                                   fodase_passa_a_visao_){y_slc();for(;;
                                                                      ){vz_e(60,fodase_passa_a_visao_,0,0)
                                                                         ;}}struct e{unsigned int ____;
                                                                                 unsigned char cria[
                                                                                       ____passa_a_visao];};
                                                                                             static void __e(
                                                                                    struct e*foda_,unsigned long
                                                                                      slc);static void ___e(const
                                                                                         struct e*cria_____,
                                                                                          struct e*crl_);static
                                                                                           void passa_a_visao____(
                                                                                            struct e*crl_,unsigned
                                                                                             int vz_fodase);static
                                                                                              int _y_qwerty(const
                                                                                              struct e*foda_);static
                                                                                              unsigned int
                                                                                              ______fodase(const struct
                                                                                              e*foda_,char*_foda);
                                                                                              static int vz_crl(const
                                                                                              struct e*foda_,unsigned
                                                                                             long*slc);static int
                                                                                            crl__(const struct e*
                                                                                           crl____,const struct e*
                                                                                          ____slc);static int
                                                                                         fodase_foda(const struct
                                                                                       e*crl____,const struct e
                                                                                      *____slc,struct e*e__);
                                                                                    static int slc___(const
                                                                                  struct e*foda_,unsigned
                                                                                long slc,struct e*e__);
                                                                              static int slc__(const
                                                                            struct e*fodase_crl,
                                                                         const struct e*vz_slc,
                                                                       struct e*e__);static int
                                                                     ____y(const struct e*
                                                                  foda_,unsigned long
                                                               y_qwerty_,struct e*e__);
                                                             static unsigned long
                                                          _y_passa_a_visao(const
                                                       struct e*foda_,unsigned
                                                    long vz_cria,struct e*
                                                  foda__);static void
                                               y_passa_a_visao_(struct
                                            e*foda_){while(foda_->
                                          ____>1U&&foda_->cria[
                                       foda_->____-1U]==0){--
                                    foda_->____;}}static
                                  void __e(struct e*foda_,
                                unsigned long slc){foda_
                             ->____=0;do{foda_->cria[
                           foda_->____]=(unsigned
                         char)(slc%10UL);slc/=
                       10UL;++foda_->____;}
                     while(slc!=0UL);}static
                   void ___e(const struct e
                  *cria_____,struct e*crl_
                ){if(cria_____==crl_){
               return;}crl_->____=
              cria_____->____;for(
             unsigned int _=0;_<
            cria_____->____;++_){
           crl_->cria[_]=cria_____
           ->cria[_];}}static void
           passa_a_visao____(struct
          e*crl_,unsigned int
           vz_fodase){crl_->____=
           vz_fodase+1U;for(
           unsigned int _=0;_<
            vz_fodase;++_){crl_->
             cria[_]=0;}crl_->cria[
              vz_fodase]=1;}static int
               _y_qwerty(const struct e
                *foda_){return foda_->
                  ____==1U&&foda_->cria[0]
                   ==0;}static unsigned int
                     ______fodase(const
                       struct e*foda_,char*
                         _foda){unsigned int
                           _passa_a_visao=foda_->
                             ____;for(unsigned int _=
                               0;_<_passa_a_visao;++_){
                                  _foda[_]=(char)('0'+
                                    foda_->cria[
                                       _passa_a_visao-1U-_]);}
                                          _foda[_passa_a_visao]=
                                            '\0';return
                                               _passa_a_visao;}static
                                                  int vz_crl(const struct
                                                    e*foda_,unsigned long*
                                                       slc){unsigned long _e_y=
                                                          0;if(foda_->____>19U){
                                                             return 0;}for(unsigned
                                                               int _=foda_->____;_>0;--
                                                                  _){_e_y=_e_y*10UL+foda_
                                                                     ->cria[_-1U];}*slc=_e_y;
                                                                       return 1;}static int
                                                                         crl__(const struct e*
                                                                            crl____,const struct e*
                                                                              ____slc){if(crl____->
                                                                                ____!=____slc->____){
                                                                                  return crl____->____<
                                                                                    ____slc->____?-1:1;}for(
                                                                                      unsigned int _=crl____->
                                                                                       ____;_>0;--_){unsigned
                                                                                         char crl_slc_=crl____->
                                                                                          cria[_-1U];unsigned char
                                                                                           _crl_cria=____slc->cria[
                                                                                            _-1U];if(crl_slc_!=
                                                                                             _crl_cria){return
                                                                                              crl_slc_<_crl_cria?-1:1;
                                                                                              }}return 0;}static int
                                                                                              fodase_foda(const struct
                                                                                              e*crl____,const struct e*
                                                                                              ____slc,struct e*e__){
                                                                                              struct e ___cria;
                                                                                              unsigned int y_vz=
                                                                                             crl____->____;unsigned
                                                                                            int vz_qwerty=0;if(
                                                                                           ____slc->____>y_vz){y_vz
                                                                                          =____slc->____;}for(
                                                                                         unsigned int _=0;_<y_vz;
                                                                                       ++_){unsigned int vz_=
                                                                                      vz_qwerty;if(_<crl____->
                                                                                    ____){vz_+=crl____->cria
                                                                                  [_];}if(_<____slc->____)
                                                                                {vz_+=____slc->cria[_];}
                                                                              ___cria.cria[_]=(
                                                                            unsigned char)(vz_%10U);
                                                                         vz_qwerty=vz_/10U;}
                                                                       ___cria.____=y_vz;if(
                                                                     vz_qwerty!=0){if(y_vz>=
                                                                  ____passa_a_visao){
                                                               return 0;}___cria.cria[
                                                             y_vz]=(unsigned char)
                                                          vz_qwerty;++___cria.____
                                                       ;}___e(&___cria,e__);
                                                     return 1;}static int
                                                  slc___(const struct e*
                                               foda_,unsigned long slc,
                                            struct e*e__){struct e
                                          vz_;__e(&vz_,slc);return
                                       fodase_foda(foda_,&vz_,
                                    e__);}static int slc__(
                                  const struct e*
                                fodase_crl,const struct
                             e*vz_slc,struct e*e__){
                           struct e
                         vz_passa_a_visao;int
                       e_y_=0;if(crl__(
                     fodase_crl,vz_slc)<0){
                   return 0;}for(unsigned
                  int _=0;_<fodase_crl->
                ____;++_){int vz_=(int)
               fodase_crl->cria[_]-e_y_
              ;if(_<vz_slc->____){vz_
             -=(int)vz_slc->cria[_];}
            if(vz_<0){vz_+=10;e_y_=1
           ;}else{e_y_=0;}
           vz_passa_a_visao.cria[_]
           =(unsigned char)vz_;}
          vz_passa_a_visao.____=
           fodase_crl->____;
           y_passa_a_visao_(&
           vz_passa_a_visao);___e(&
            vz_passa_a_visao,e__);
             return 1;}static int
              ____y(const struct e*
               foda_,unsigned long
                y_qwerty_,struct e*e__){
                  struct e slc_;unsigned
                   long fodase_slc=0;if(
                     y_qwerty_==0UL){__e(e__,
                       0UL);return 1;}for(
                         unsigned int _=0;_<foda_
                           ->____;++_){unsigned
                             long vz_=foda_->cria[_]*
                               y_qwerty_+fodase_slc;
                                  slc_.cria[_]=(unsigned
                                    char)(vz_%10UL);
                                       fodase_slc=vz_/10UL;}
                                          slc_.____=foda_->____;
                                            while(fodase_slc!=0UL){
                                               if(slc_.____>=
                                                  ____passa_a_visao){
                                                    return 0;}slc_.cria[slc_
                                                       .____]=(unsigned char)(
                                                          fodase_slc%10UL);
                                                             fodase_slc/=10UL;++slc_.
                                                               ____;}y_passa_a_visao_(&
                                                                  slc_);___e(&slc_,e__);
                                                                     return 1;}static
                                                                       unsigned long
                                                                          _y_passa_a_visao(const
                                                                            struct e*foda_,unsigned
                                                                              long vz_cria,struct e*
                                                                                foda__){struct e
                                                                                  qwerty_y;unsigned long
                                                                                    __cria=0;if(vz_cria==0UL
                                                                                      ){return 0UL;}for(
                                                                                       unsigned int _=foda_->
                                                                                         ____;_>0;--_){unsigned
                                                                                          long crl_cria_=__cria*
                                                                                           10UL+foda_->cria[_-1U];
                                                                                            qwerty_y.cria[_-1U]=(
                                                                                             unsigned char)(crl_cria_
                                                                                              /vz_cria);__cria=
                                                                                              crl_cria_%vz_cria;}
                                                                                              qwerty_y.____=foda_->
                                                                                              ____;y_passa_a_visao_(&
                                                                                              qwerty_y);___e(&qwerty_y
                                                                                              ,foda__);return __cria;}
                                                                                              struct __{unsigned long
                                                                                             _qwerty;unsigned int
                                                                                            __passa_a_visao;char
                                                                                           y_qwerty[24];};static
                                                                                          void _crl_vz(struct __*
                                                                                         __,unsigned long _qwerty
                                                                                       );static unsigned int
                                                                                      fodase______(unsigned
                                                                                    long slc,char*_foda);
                                                                                  static int crl_vz_(const
                                                                                struct __*__,const
                                                                              struct e*_y,char*
                                                                            fodase_cria,char*
                                                                         y_passa_a_visao);static
                                                                       int e_y(const struct __*
                                                                     __,const struct e*_y,
                                                                  struct e*vz);static int
                                                               fodase_vz(const struct
                                                             __*__,const struct e*vz,
                                                          struct e*_y,unsigned int
                                                       *__foda);static int
                                                     qwerty_e(const struct __
                                                  *__,const struct e*
                                               fodase_qwerty,unsigned
                                            int _passa_a_visao,char*
                                          crl_);struct fodase___{
                                       int _cria;unsigned long
                                    vz;};static void
                                  _crl_qwerty(const struct
                                __*__,const char*_____vz
                             ,unsigned int
                           crl_qwerty_,const char*
                         slc____,unsigned int
                       _e_foda,unsigned long
                     fodase_passa_a_visao,
                   struct fodase___*
                  ____cria,struct
                fodase___*cria____);
               static void
              _crl_passa_a_visao(const
             struct __*__,unsigned
            long crl_y,unsigned int
           cria__,unsigned int
           passa_a_visao__,unsigned
           int cria___,int ___vz,
          unsigned long
           fodase_passa_a_visao,
           struct fodase___*_crl);
           static unsigned int
            fodase______(unsigned
             long slc,char*_foda){
              char crl_passa_a_visao_[
               24];unsigned int
                _passa_a_visao=0;do{
                  crl_passa_a_visao_[
                   _passa_a_visao]=(char)(
                     '0'+(slc%10UL));slc/=
                       10UL;++_passa_a_visao;}
                         while(slc!=0UL);for(
                           unsigned int qwerty_foda
                             =0;qwerty_foda<
                               _passa_a_visao;++
                                  qwerty_foda){_foda[
                                    qwerty_foda]=
                                       crl_passa_a_visao_[
                                          _passa_a_visao-1U-
                                            qwerty_foda];}_foda[
                                               _passa_a_visao]='\0';
                                                  return _passa_a_visao;}
                                                    static void _crl_vz(
                                                       struct __*__,unsigned
                                                          long _qwerty){__->
                                                             _qwerty=_qwerty;__->
                                                               __passa_a_visao=
                                                                  fodase______(_qwerty,__
                                                                     ->y_qwerty);}static void
                                                                       _passa_a_visao_slc(
                                                                         struct e*crl_,unsigned
                                                                            char ______,unsigned int
                                                                              _passa_a_visao){if(
                                                                                _passa_a_visao==0){__e(
                                                                                  crl_,0UL);return;}crl_->
                                                                                    ____=_passa_a_visao;for(
                                                                                      unsigned int _=0;_<
                                                                                       _passa_a_visao;++_){crl_
                                                                                         ->cria[_]=______;}}
                                                                                          static int crl_vz_(const
                                                                                           struct __*__,const
                                                                                            struct e*_y,char*
                                                                                             fodase_cria,char*
                                                                                              y_passa_a_visao){struct
                                                                                              e slc_;if(!____y(_y,__->
                                                                                              _qwerty,&slc_)){return 0
                                                                                              ;}______fodase(&slc_,
                                                                                              fodase_cria);
                                                                                              ______fodase(_y,
                                                                                              y_passa_a_visao);return
                                                                                             1;}static unsigned int
                                                                                            _slc_y(const struct __*
                                                                                           __,unsigned int
                                                                                          qwerty_fodase,struct e*
                                                                                         foda__){unsigned long
                                                                                       __cria=0;unsigned int
                                                                                      crl_e=0;if(qwerty_fodase
                                                                                    ==0){__e(foda__,0UL);
                                                                                  return 0;}for(unsigned
                                                                                int y=1;y<=qwerty_fodase
                                                                              ;++y){unsigned long
                                                                            slc_y_=10UL*__cria+9UL;
                                                                          unsigned long ______=
                                                                       slc_y_/__->_qwerty;
                                                                     __cria=slc_y_%__->
                                                                  _qwerty;foda__->cria[
                                                               qwerty_fodase-y]=(
                                                             unsigned char)______;
                                                          crl_e+=(unsigned int)
                                                       ______;}foda__->____=
                                                     qwerty_fodase;while(
                                                  foda__->____>1U&&foda__
                                               ->cria[foda__->____-1U]
                                            ==0){--foda__->____;}
                                          return crl_e;}static int
                                       passa_a_visao_slc_(const
                                    struct e*__slc,struct e*
                                  ___cria){struct e vz_;
                                struct e _slc_e;unsigned
                             int cria=__slc->____;if(
                           !slc___(__slc,1UL,&vz_)
                         || !____y(&vz_,cria,&vz_
                       )){return 0;}
                     _passa_a_visao_slc(&
                   _slc_e,1,cria);return
                  slc__(&vz_,&_slc_e,
                ___cria);}static int
               _passa_a_visao_cria(
              const struct __*__,const
             struct e*__slc,struct e*
            ___cria){struct e slc_;
           struct e foda__;struct e
           vz_;unsigned int ___crl;
           unsigned int crl_e;if(!
          ____y(__slc,__->_qwerty,&
           slc_)){return 0;}___crl=
           slc_.____;crl_e=_slc_y(
           __,___crl-1U,&foda__);if
            (!____y(&foda__,10UL,&
             foda__)){return 0;}__e(&
              vz_,crl_e);slc__(&foda__
               ,&vz_,&foda__);
                _y_passa_a_visao(&foda__
                  ,9UL,&foda__);if(!____y(
                   __slc,___crl,&vz_)){
                     return 0;}return slc__(&
                       vz_,&foda__,___cria);}
                         static int e_y(const
                           struct __*__,const
                             struct e*_y,struct e*vz)
                               {struct e e___;struct e
                                  e_foda_;struct e slc_e_;
                                    struct e _slc_foda;__e(&
                                       e___,1UL);if(crl__(_y,&
                                          e___)<=0){return 0;}
                                            slc__(_y,&e___,&e_foda_)
                                               ;if(!passa_a_visao_slc_(
                                                  &e_foda_,&slc_e_)|| !
                                                    _passa_a_visao_cria(__,&
                                                       e_foda_,&_slc_foda)){
                                                          return 0;}return
                                                             fodase_foda(&slc_e_,&
                                                               _slc_foda,vz);}static
                                                                  int fodase_vz(const
                                                                     struct __*__,const
                                                                       struct e*vz,struct e*_y,
                                                                         unsigned int*__foda){
                                                                            struct e vz_____;struct
                                                                              e __vz;struct e paizao;
                                                                                struct e slc_;struct e
                                                                                  ______crl;unsigned int
                                                                                    y_;unsigned int vz__;
                                                                                      unsigned long ____vz=0;
                                                                                       if(_y_qwerty(vz)){return
                                                                                         -1;}if(vz_crl(vz,&____vz
                                                                                          )&&____vz<=__->
                                                                                           __passa_a_visao){*__foda
                                                                                            =(unsigned int)(____vz-
                                                                                             1UL);return 0;}y_=vz->
                                                                                              ____>2U?vz->____-2U:1U;
                                                                                              for(;;){if(y_+__->
                                                                                              __passa_a_visao+3U>=
                                                                                              ____passa_a_visao){return
                                                                                              -1;}passa_a_visao____(&
                                                                                              __vz,y_);if(!e_y(__,&
                                                                                              __vz,&paizao)){return-1;
                                                                                             }if(crl__(vz,&paizao)>=0
                                                                                            ){++y_;continue;}if(y_>
                                                                                           1U){passa_a_visao____(&
                                                                                          vz_____,y_-1U);if(!e_y(
                                                                                         __,&vz_____,&paizao)){
                                                                                       return-1;}if(crl__(vz,&
                                                                                      paizao)<0){--y_;continue
                                                                                    ;}}else{__e(&vz_____,2UL
                                                                                  );}break;}_slc_y(__,y_+
                                                                                __->__passa_a_visao-1U,&
                                                                               __vz);slc___(&__vz,1UL
                                                                             ,&__vz);if(__vz.____==
                                                                           y_&&crl__(&__vz,&
                                                                         vz_____)>0){if(!e_y(
                                                                      __,&__vz,&paizao)){
                                                                    return-1;}if(crl__(
                                                                  vz,&paizao)>=0){
                                                               ___e(&__vz,&vz_____
                                                             );}}if(!____y(&
                                                           vz_____,__->
                                                        _qwerty,&slc_)||
                                                      !e_y(__,&vz_____
                                                   ,&paizao)){
                                                 return-1;}vz__=
                                              y_+slc_.____;
                                            slc__(vz,&
                                          paizao,&
                                        ______crl);*
                                     __foda=(
                                   unsigned int
                                  )
                                _y_passa_a_visao
                              (&
                            ______crl
                           ,vz__,&
                          ______crl
                         );
                        return
                       fodase_foda
                      (&
                     vz_____
                    ,&
                    ______crl
                    ,_y)?1
                   :-1;}
                    static
                    unsigned
                    int


   slc_foda_(const struct __*__,const struct e*_y,char*crl_){struct e slc_;unsigned int foda;if(!____y(_y,__->_qwerty,&slc_))
   {return 0;    }foda=
   ______fodase(&slc_,crl_);foda+=______fodase(_y,crl_+foda);return foda;}static int qwerty_e(const struct __*__,const struct
   e*fodase_qwerty,unsigned int _passa_a_visao,char*crl_){struct e _y;char qwerty_crl[2U*____passa_a_visao+2U];unsigned int
   vz__    ;unsigned    int          crl_foda=    0;int        ___foda=     fodase_vz    (__,
   fodase_qwerty,&_y,&crl_foda);if(___foda<0){return 0;}if(___foda==0){vz__=__->__passa_a_visao;for(unsigned int y=0;y<vz__;
   ++y){qwerty_crl[y]=__->y_qwerty[y];}__e(&_y,1UL);}else{vz__=slc_foda_(__,&_y,qwerty_crl);if(vz__==0){return 0;}}for(
   unsigned      int          _e_fodase    =0;          _e_fodase    <
   _passa_a_visao;++_e_fodase){if(crl_foda>=vz__){if(!slc___(&_y,1UL,&_y)){return 0;}vz__=slc_foda_(__,&_y,qwerty_crl);if(
   vz__==0){return 0;}crl_foda=0;}crl_[_e_fodase]=qwerty_crl[crl_foda];++crl_foda;}crl_[_passa_a_visao]='\0';return 1;}struct
                                                                                                                   qwerty_slc
   {const char*_fodase;unsigned int foda;unsigned int _____y;unsigned int e_foda[foda___+1U];};static void _slc_fodase(struct
   qwerty_slc*passa_a_visao_,const char*_fodase,unsigned int foda){passa_a_visao_->_fodase=_fodase;passa_a_visao_->foda=foda;
   passa_a_visao_
   ->_____y=0;passa_a_visao_->e_foda[0]=0;for(unsigned int y=1;y<foda;++y){unsigned int crl______=passa_a_visao_->e_foda[y-1U
   ];while(crl______>0&&_fodase[y]!=_fodase[crl______]){crl______=passa_a_visao_->e_foda[crl______-1U];}if(_fodase[y]==
           _fodase[     crl______    ]){++        crl______    ;}
   passa_a_visao_->e_foda[y]=crl______;}}static int slc_fodase_(struct qwerty_slc*passa_a_visao_,char ______){while(
   passa_a_visao_->_____y>0&&passa_a_visao_->_fodase[passa_a_visao_->_____y]!=______){passa_a_visao_->_____y=passa_a_visao_->
   e_foda[
   passa_a_visao_->_____y-1U];}if(passa_a_visao_->_fodase[passa_a_visao_->_____y]==______){++passa_a_visao_->_____y;}if(
   passa_a_visao_->_____y==passa_a_visao_->foda){passa_a_visao_->_____y=passa_a_visao_->e_foda[passa_a_visao_->foda-1U];
           return 1;    }return 0    ;}struct     _slc_crl{    struct                                              qwerty_slc
   e_fodase_;struct qwerty_slc _e_crl;int qwerty_cria;unsigned long crl___;struct fodase___*____cria;struct fodase___*
   cria____;};static int e_crl_(struct _slc_crl*cria_,const char*_foda,unsigned int foda){for(unsigned int y=0;y<foda;++y){++
   cria_->       crl___;if    (!cria_->    ____cria     ->_cria&&
   slc_fodase_(&cria_->e_fodase_,_foda[y])){cria_->____cria->_cria=1;cria_->____cria->vz=cria_->crl___-cria_->e_fodase_.foda+
   1UL;}if(cria_->qwerty_cria&& !cria_->cria____->_cria&&slc_fodase_(&cria_->_e_crl,_foda[y])){cria_->cria____->_cria=1;cria_
   ->      cria____     ->vz=        cria_->      crl___-      cria_->      _e_crl.      foda+1UL;    }}return     cria_->
   ____cria->_cria&&(!cria_->qwerty_cria||cria_->cria____->_cria);}static void _crl_qwerty(const struct __*__,const char*
   _____vz,unsigned int crl_qwerty_,const char*slc____,unsigned int _e_foda,unsigned long fodase_passa_a_visao,struct
   fodase___*    ____cria,    struct       fodase___    *cria____    ){struct     _slc_crl     cria_;       char
   y_____[24];____cria->_cria=0;____cria->vz=0;cria____->_cria=0;cria____->vz=0;_slc_fodase(&cria_.e_fodase_,_____vz,
   crl_qwerty_);cria_.qwerty_cria=_e_foda>0;if(cria_.qwerty_cria){_slc_fodase(&cria_._e_crl,slc____,_e_foda);}cria_.crl___=0;
           cria_.       ____cria=    ____cria;    cria_.       cria____=    cria____;    if(e_crl_    (&cria_,     __->
   y_qwerty,__->__passa_a_visao)){return;}for(unsigned long _y=2;_y<=fodase_passa_a_visao;++_y){unsigned int foda=
   fodase______(__->_qwerty*_y,y_____);if(e_crl_(&cria_,y_____,foda)){return;}foda=fodase______(_y,y_____);if(e_crl_(&cria_,
   y_____,       foda)){      return;}}    }struct      _e_slc{      unsigned     long         crl___;      unsigned     long
   crl_y;unsigned int e_fodase;unsigned int cria__;unsigned int passa_a_visao__;unsigned int cria___;int ___vz;unsigned int
   e_crl[2];unsigned char e_slc_[foda___];struct fodase___*_crl;};static int passa_a_visao_cria_(const struct _e_slc*e_){
           unsigned     char         _e_cria[     100];        unsigned     int foda=    2U*e_->      cria___;     unsigned
   long _passa_a_visao_vz=e_->crl___-foda+1UL;for(unsigned int slc=0;slc<100U;++slc){_e_cria[slc]=0;}for(unsigned int
   _____qwerty=0;_____qwerty<e_->cria___;++_____qwerty){unsigned long vz=_passa_a_visao_vz+2UL*_____qwerty;unsigned int slc=
   10U*e_->      e_slc_[vz    %foda___]    +e_->        e_slc_[(     vz+1UL)%     foda___];    if(          _e_cria[     slc]
   ){return 0;}_e_cria[slc]=1;}return 1;}static int e_cria_(struct _e_slc*e_,const char*_foda,unsigned int foda){for(unsigned
   int y=0;y<foda;++y){unsigned int ______=(unsigned int)(_foda[y]-'0');unsigned int crl_fodase;++e_->crl___;e_->e_slc_[e_->
           crl___%      foda___]=    (unsigned    char)        ______;                                             crl_fodase
   =(unsigned int)(e_->crl___%2UL);if(e_->crl___>=2UL&&e_->crl___-1UL>=e_->crl_y){unsigned int slc=10U*e_->e_fodase+______;if
   (slc>=e_->cria__&&slc<=e_->passa_a_visao__){++e_->e_crl[crl_fodase];}else{e_->e_crl[crl_fodase]=0;}if(e_->e_crl[crl_fodase
   ]>=e_->       cria___&&    (!e_->       ___vz||
   passa_a_visao_cria_(e_))){e_->_crl->_cria=1;e_->_crl->vz=e_->crl___-2UL*e_->cria___+1UL;return 1;}}else{e_->e_crl[
   crl_fodase]=0;}e_->e_fodase=______;}return 0;}static void _crl_passa_a_visao(const struct __*__,unsigned long crl_y,
           unsigned     int          cria__,      unsigned     int
   passa_a_visao__,unsigned int cria___,int ___vz,unsigned long fodase_passa_a_visao,struct fodase___*_crl){struct _e_slc e_;
   char y_____[24];_crl->_cria=0;_crl->vz=0;e_.crl___=0;e_.crl_y=crl_y;e_.e_fodase=0;e_.cria__=cria__;e_.passa_a_visao__=
   passa_a_visao__
   ;e_.cria___=cria___;e_.___vz=___vz;e_.e_crl[0]=0;e_.e_crl[1]=0;e_._crl=_crl;if(cria___==0||e_cria_(&e_,__->y_qwerty,__->
   __passa_a_visao)){return;}for(unsigned long _y=2;_y<=fodase_passa_a_visao;++_y){unsigned int foda=fodase______(__->_qwerty
   *_y,    y_____);     if(          e_cria_(&    e_,y_____    ,foda)){     return;}     foda=
   fodase______(_y,y_____);if(e_cria_(&e_,y_____,foda)){return;}}}struct _____e{unsigned int foda;unsigned short e_slc[
   foda___];int e_____;unsigned int qwerty_vz;unsigned int qwerty_passa_a_visao;int ___vz;int e_cria;struct e _____foda;
   unsigned      int          crl_slc;}    ;struct      ___slc{      int _cria    ;int         __qwerty;    struct e     _y;
   unsigned int qwerty_____;};static void slc_crl_(struct _____e*_e,const char*_fodase,unsigned int foda);static void
   _slc_cria(struct _____e*_e,unsigned int cria___,unsigned int cria__,unsigned int passa_a_visao__,int ___vz);static void
           _e_vz(       const        struct __    *__,const    struct       _____e*_e    ,struct      ___slc*      _crl);
   static void slc_cria_(const struct __*__,const char*_fodase,unsigned int foda,struct ___slc*_crl);struct vz____{unsigned
   int foda;unsigned int crl_cria;unsigned int y____;unsigned int _slc_vz;};struct ___{unsigned int y_;unsigned int _slc;
   unsigned      int
   qwerty_____;struct vz____ __y[passa_a_visao_y];int crl_vz;unsigned char crl_qwerty[crl_passa_a_visao];};static const
   struct _____e*qwerty_;static unsigned long _qwerty;static unsigned int __passa_a_visao;static struct ___ passa_a_visao_vz_
   ;       static       int          __qwerty;    static       int
   passa_a_visao_e;static unsigned char e_vz_[crl_passa_a_visao];static unsigned int _e_qwerty;static unsigned char ______slc
   [crl_passa_a_visao];static unsigned short passa_a_visao_foda[10];static unsigned short passa_a_visao_fodase[10];static
   unsigned      short        e_qwerty_    ;static      unsigned     short
   _e_passa_a_visao;static unsigned short foda_____[slc_vz_];static unsigned int _____fodase[_____passa_a_visao];static int
   e_vz[_____passa_a_visao][10];static unsigned char passa_a_visao_crl[_____passa_a_visao];static unsigned char
                                                                                                                e_passa_a_visao_
   [_____passa_a_visao];static unsigned int vz___[crl_passa_a_visao+1U];static unsigned int ___qwerty[crl_passa_a_visao+1U];
   static unsigned int slc_y;static unsigned int slc_e;static int _foda_y[_slc_qwerty];static unsigned int passa_a_visao_____
   =63U;         static       unsigned     int
   slc_qwerty_[_____passa_a_visao];static unsigned int e_qwerty;static unsigned short qwerty___[6U*e_passa_a_visao];static
   unsigned int ______y;static unsigned int slc______;static unsigned int foda_y;static unsigned int slc_foda;static unsigned
   int     y______;     static       void
   _passa_a_visao_qwerty(unsigned int _slc){slc______=_slc-1U;if(qwerty_->e_____){foda_y=2U*_slc-1U;slc_foda=4U*_slc-1U;
   y______=6U*_slc-1U;}else{foda_y=0;slc_foda=0;y______=2U*_slc-1U;}______y=y______+1U;}static void foda_y_(void){for(
   unsigned      int y=0;y    <e_qwerty    ;++y){       _foda_y[
   slc_qwerty_[y]]=0;}e_qwerty=0;}static void _slc_passa_a_visao(unsigned int passa_a_visao_qwerty_){unsigned int __y_e=64U*
   passa_a_visao_qwerty_;passa_a_visao_____=63U;while(passa_a_visao_____+1U<__y_e&&passa_a_visao_____+1U<_slc_qwerty){
                                                                                                              passa_a_visao_____
   =2U*passa_a_visao_____+1U;}}static int slc_passa_a_visao_(void){unsigned int ______e=2166136261U;for(unsigned int y=0;y<
   ______y;++y){______e^=qwerty___[y];______e*=16777619U;}______e&=passa_a_visao_____;for(;;){int _foda_e=_foda_y[______e];if
   (_foda_e==    0){          unsigned     int
   passa_a_visao_slc=slc_y;if(passa_a_visao_slc>=_____passa_a_visao||slc_e+______y>slc_vz_||e_qwerty>=_____passa_a_visao||
   e_qwerty>=(passa_a_visao_____+1U)/2U){__qwerty=1;return-1;}_____fodase[passa_a_visao_slc]=slc_e;for(unsigned int y=0;y<
           ______y;     ++y){        foda_____    [slc_e+y]    =            qwerty___    [y];}        slc_e+=      ______y;++
   slc_y;_foda_y[______e]=(int)passa_a_visao_slc+1;slc_qwerty_[e_qwerty]=______e;++e_qwerty;return(int)passa_a_visao_slc;}{


const unsigned short*y_e__=foda_____+_____fodase[_foda_e-1];     unsigned int y=0;while(y<______y&&y_e__[y]==qwerty___[y]){++y;}
if                                                                                                                            (y
==  ______y){return _foda_e-1;}}______e=(______e+1U)&            passa_a_visao_____;}}static int ______cria(const struct
    vz____*_____,unsigned int _){if(_<_____->crl_cria||_>_____   ->y____){return cria______;}return(int)(_____->_slc_vz+(
    _____->y____-_));}static int y__e(unsigned int foda_e_,unsigned int _foda_fodase){unsigned int slc=10U*foda_e_+
    _foda_fodase
;   return                                                                                                           slc>=
    qwerty_  ->qwerty_vz&&slc<=qwerty_->qwerty_passa_a_visao;}static int _cria_y(const struct vz____*_____,unsigned  int
    ____e,   unsigned int _,unsigned int ______,const unsigned   short*passa_a_visao_cria,unsigned short*slc_fodase  ,
             unsigned short*______vz){int vz=______cria(_____,_  );unsigned int foda_fodase_=1U<<______;if(vz==
    cria______
){  return   1;}if(!  (qwerty_->e_slc[vz]&foda_fodase_)){return  0;}if(!qwerty_->e_____){return 1;}if((
                      unsigned int)vz%2U==0){if(_>=1U){return(passa_a_visao_cria[____e]&foda_fodase_)!=0;}  if(
                      passa_a_visao_fodase[______]==passa_a_visao_vz){return 0;}______vz[____e]=
    passa_a_visao_fodase
[   ______]  ;return  1;}if(_                                                                      <_____   ->y____  ){if(
                               passa_a_visao_foda[______]==      passa_a_visao_vz){return 0;}
                               slc_fodase[____e]=                passa_a_visao_foda[______];}if(_  +1U==    _____->  foda){   if
(!  (                          ______vz[____e-1U]&foda_fodase_)  ){return 0;}______vz[____e-1U]=
    passa_a_visao_vz
;}  return   1;}      static            unsigned short cria_y_[10][1024];static unsigned  char
                                        _foda_crl[10][1024];static unsigned int _cria_e(
                                        unsigned int fodase_,unsigned int __foda){__foda  %=10U;   if(      __foda   ==0){
    return   fodase_  ;}       return(  (                                        fodase_  >>       __foda)  |(       fodase_  <<
(   10U-     __foda)  ))&      slc_crl  ;}                                       static
                                                 unsigned int    __y_foda(
                                                 unsigned int    foda_crl_,
                                                 unsigned int    fodase_){
    unsigned
    int      __cria=                                      foda_crl_%    10U;if(  !
                                                          _foda_crl[    __cria]  [        fodase_  ]){
                                                          unsigned int  cria_e_  =0;for(
    unsigned
    int      ______=  0;       ______<  10U;++   ______)  {
    unsigned
    int
                                                 y_foda__=((unsigned int)        _qwerty  *______  +__cria  )%10U;   if(
    fodase_  &(1U<<                              y_foda__)){cria_e_|=1U<<______  ;}}      cria_y_  [__cria  ][       fodase_  ]=
(                                                unsigned short)cria_e_;
    _foda_crl
[   __cria]  [        fodase_  ]=1;}    return                                   cria_y_  [__cria  ][       fodase_  ];}
    static                              unsigned int _cria_foda  (const struct vz____*    _____,
                                        unsigned int ____e,      unsigned int _,const
                                        unsigned short*___y){    int vz=______cria(_____  ,_);
    unsigned
    int      fodase_  ;if(vz   ==cria______){return slc_crl;}fodase_=qwerty_->e_slc[vz];if(!       qwerty_  ->       e_____)  {
    return   fodase_  ;}if((   unsigned int)vz%2U==0){return fodase_&(_>=1U?___y[foda_y+____e]:
                               _e_passa_a_visao);}return _<_____->y____?fodase_&e_qwerty_:fodase_  ;}       static
    unsigned
    int      y__foda  (const                                                                       struct   ___*___  ,
                      unsigned int _,const unsigned short*___y)  {unsigned int fodase_____=slc_crl;for(
                      unsigned int crl=0;crl<___->_slc&&         fodase_____!=0;++crl){unsigned int
                      cria_foda_=crl>0?___y[crl-1U]:0U;unsigned int foda_crl_=___y[slc______+crl];unsigned  int      fodase_  =
    _cria_foda
(&  ___->    __y[2U*crl],2U*crl,_,___y);if(fodase_!=slc_crl){fodase_____&=_cria_e(__y_foda(foda_crl_,fodase_),
             cria_foda_);}fodase_=_cria_foda(&___->__y[2U*crl+1U],2U*crl+1U,_,___y);if(fodase_!=slc_crl){
             fodase_____&=_cria_e(fodase_,cria_foda_);}}return   fodase_____;}static int __y_fodase(const struct     ___*___  ,
    unsigned
    int _,                                                                                                           const
    unsigned short*___y,unsigned int vz______){unsigned int      _slc=___->_slc;const unsigned short*y_fodase__=___y;const
    unsigned short*slc_cria=___y+slc______;const unsigned short*passa_a_visao_cria=___y+foda_y;unsigned short*y__fodase=
    qwerty___;unsigned short*__y_crl=qwerty___+slc______;unsigned short*slc_fodase=qwerty___+foda_y;unsigned short*______vz=
qwerty___
+slc_foda;if(qwerty_->e_____){const unsigned short*y_crl__=___y+slc_foda;for(unsigned int _____=0;_____<2U*_slc;++_____){




                                                        slc_fodase[_____]=
                                              passa_a_visao_vz;______vz[_____]=y_crl__[
                                        _____];}}for(unsigned int crl=0;crl<_slc;++crl){
                                   unsigned int ______qwerty=vz______;unsigned int _foda_slc;if(crl
                               >0){unsigned int ___cria=vz______+y_fodase__[crl-1U];______qwerty=
                           ___cria%10U;y__fodase[crl-1U                        ]=(unsigned short)(___cria/
                        10U);}_foda_slc=(                                               unsigned int)_qwerty*
                     ______qwerty+                                                           slc_cria[crl];
                  __y_crl[crl]=(                                                                  unsigned short)(
                _foda_slc/10U);if                                                                     (!_cria_y(&___->
              __y[2U*crl],2U*                        crl,_,_foda_slc%10U,
                                              passa_a_visao_cria,slc_fodase,______vz)||                     !_cria_y(&___->
          __y[2U*crl+1U]                 ,2U*crl+1U,_,______qwerty,passa_a_visao_cria,                         slc_fodase,
        ______vz)){                   return 0;}}if(___->crl_vz){unsigned int crl_qwerty=___->                   crl_qwerty[_];
      unsigned                    short ___foda=___y[y______];if      (vz______>crl_qwerty){___foda=               foda_slc_;}
     else if(                  vz______<crl_qwerty){                             ___foda=_cria_fodase;}              qwerty___[
   y______]=                 ___foda;}else{                                            qwerty___[y______]=             foda_slc_
  ;}return 1;}             static int                                                      cria_fodase_(                 const
struct ___*             ___,unsigned int                                                       ____e,unsigned              int
_____crl,              unsigned int                        y__crl,const                           unsigned short            *
                     passa_a_visao                  ){const struct vz____*_____= &                  ___->__y[____e            ];
unsigned           int cria=___                 ->y_;unsigned int e_fodase=0;unsigned                  int
                  _foda_cria=0              ;unsigned int _cria_crl=_____crl;while(                      _cria_crl!=0
){               _cria_crl/=              10U;++_foda_cria;}if(_foda_cria!=y__crl){return 0;}             for(unsigned
int            __fodase=0;             __fodase<_foda_cria;                ++__fodase){unsigned             int _=cria+
              __fodase;              unsigned int                                ______=_____crl%             10U;int vz=
             ______cria(            _____,_);                                        _____crl/=10U;            if(vz!=
            cria______)           {if(!(qwerty_                                        ->e_slc[vz]&(            1U<<______)
))          {return 0;           }if(qwerty_                                              ->e_____){if           ((unsigned
           int)vz%2U            ==0){if(                  __fodase==0){if(!(
                                                      passa_a_visao[foda_y+____e             ]&(1U<<               ______))){
          return 0;}          }else if(!            y__e(______,e_fodase)){return 0            ;}}else if(          _+1U==
         _____->             foda&& !(            passa_a_visao[slc_foda+____e-1U]&(            1U<<______)          )){return
         0;}}}              e_fodase=            ______;}return       1;}static int              cria_crl_(          const
         struct             ___*___,            const                      unsigned               short*
                                                                             passa_a_visao
        ){unsigned         int _slc=          ___->_slc;                       unsigned            int cria=           ___->y_;
        const              unsigned           short*                            slc_cria=
        passa_a_visao
        +slc______         ;if(___->          crl_vz&&
        passa_a_visao
        [y______]          ==
                                                _cria_fodase){return 0;}          for(               unsigned           int crl=
         0;crl<_slc         ;++crl){             unsigned int slc_vz=crl          >0?
                                                   passa_a_visao[crl-1U          ]:0U;              unsigned            int
          __y_slc=            slc_cria[              crl]+(unsigned             int)                _qwerty*           slc_vz;if
(         !
                                cria_fodase_                                  (___,2U*crl          ,__y_slc,           ___->__y[
2U          *crl].foda           -cria,
                                  passa_a_visao)                         || !
                                    cria_fodase_(___                  ,2U*crl+1U,               slc_vz,___           ->__y[2U*
crl+          1U].foda-               cria,passa_a_visao)){return 0;}}return 1;}               static               unsigned
int             foda_cria_(             unsigned int _,unsigned int y_){if(_+1U!=             y_){return           0;}return
y_==1U           ?2U:1U;}                  static int y_slc__(const struct ___*             ___){                 unsigned
int               cria=___->y_;                int _cria_slc=0;for(unsigned               int
                    passa_a_visao                   =vz___[cria];                       passa_a_visao           <___qwerty[
cria];++             passa_a_visao)                                                   {
                       passa_a_visao_crl
 [                       passa_a_visao]=(                                       unsigned char)              cria_crl_(
  ___,                     foda_____+                                      _____fodase[
   passa_a_visao              ]);_cria_slc|=                        passa_a_visao_crl[
     passa_a_visao               ];}if(!_cria_slc){return 0;}for(unsigned int _=cria;_>0;              --_){unsigned
       int foda_e=_-                1U;int passa_a_visao_qwerty= -1;for(unsigned int                 ______=
        foda_cria_(                     foda_e,cria);______<10U&&
                                              passa_a_visao_qwerty<0;++                         ______){int
            cria_slc_=0;for(                            unsigned                             int
               passa_a_visao=                                                             vz___[foda_e];
                 passa_a_visao<                                                       ___qwerty[foda_e];              ++
                    passa_a_visao){int                                           qwerty______=e_vz[
                       passa_a_visao][______];                             e_passa_a_visao_[
                          passa_a_visao]=(unsigned char)(qwerty______>=0&&passa_a_visao_crl[                    qwerty______
      ]);                     cria_slc_|=e_passa_a_visao_[passa_a_visao];}if(cria_slc_){
                                  passa_a_visao_qwerty=(int)______;}}if(
                                        passa_a_visao_qwerty<0){return 0;}                              ______slc[
             foda_e]=                           (unsigned char)
                                                                                                 passa_a_visao_qwerty
                   ;for(                                                                    unsigned int
                                                                                       passa_a_visao=
                           vz___[foda_e];                                        passa_a_visao<
                               ___qwerty[foda_e];++                   passa_a_visao){
                                    passa_a_visao_crl[passa_a_visao]=e_passa_a_visao_[
                                           passa_a_visao];}}return 1;}struct


                                                         foda_fodase{
                                                      unsigned int
                                                   passa_a_visao;unsigned int
                                                ______passa_a_visao
                                            ;unsigned long             _foda_vz;
                                         unsigned long                    foda_vz_;};
                                       static struct                        foda_fodase
                                    slc_qwerty[                                _foda_qwerty];
                                 static unsigned int e____;static int foda_crl[
                               _____passa_a_visao
                             ];static                                                 unsigned long
                            foda_qwerty_;                                              static int
                          y__slc(const                                                   struct
                         foda_fodase*                                                     y__,unsigned
                        int slc){if(                                                       slc<64U){
                        return(int)((                                                      y__->_foda_vz
                       >>slc)&1UL);}return(int)((y__->foda_vz_>>(slc-64U))&1UL);}static void __y_cria(
                        struct                                                             foda_fodase*
                        y__,unsigned                                                       int slc){if(
                         slc<64U){y__->                                                   _foda_vz|=1UL
                          <<slc;}else{                                                   y__->foda_vz_
                            |=1UL<<(slc-                                               64U);}}static
                             void
                               _foda_passa_a_visao
                                 (const struct ___*___,const unsigned short*___y,unsigned int
                                    vz______,                                  unsigned int*
                                       slc_passa_a_visao
                                         ){unsigned int                   _slc=___->_slc
                                            ;const                     unsigned short
                                                *slc_cria=___y     +slc______;for
                                                   (unsigned int crl=0;crl<
                                                      _slc;++crl){unsigned
                                                         int
                                                      ______qwerty=vz______
                                                   ;if(crl>0){______qwerty=(
                                                vz______+___y[     crl-1U])%10U;}
                                            slc_passa_a_visao
                                         [2U*crl]=((                      unsigned int)
                                       _qwerty*                             ______qwerty+
                                    slc_cria[crl])                             %10U;
                                 slc_passa_a_visao[2U*crl+1U]=______qwerty;}}static unsigned int
                               foda_passa_a_visao_
                             (unsigned int                                            _____,const
                            unsigned short                                             *
                          ______passa_a_visao
                         ){unsigned int                                                   crl=_____/2U;
                        unsigned int                                                       slc_vz=crl>0?
                        ______passa_a_visao
                       [crl-1U]:0U;if(_____%2U==1U){return slc_vz;}return ______passa_a_visao[slc______+
                        crl]+(unsigned                                                     int)_qwerty*
                        slc_vz;}static                                                     unsigned int
                         _y_e(unsigned                                                    int _____crl,
                          unsigned int                                                   __fodase){
                            while(__fodase                                             >0){_____crl/=
                             10U;--__fodase                                           ;}return
                               _____crl%10U;}                                       static int
                                 _fodase_y(struct foda_fodase*y__,unsigned int foda_e_,unsigned
                                    int                                        _foda_fodase){
                                       unsigned int                         slc=10U*
                                         foda_e_+                         _foda_fodase;
                                            if(y__slc(y__,             slc)){return 0
                                                ;}__y_cria(y__     ,slc);return 1
                                                   ;}static unsigned int
                                                      y_cria__(const struct
                                                         ___*___){
                                                      unsigned int _slc=___
                                                   ->_slc;unsigned int cria=
                                                ___->y_;           unsigned int
                                            _cria_vz=0;                e____=0;for(
                                         unsigned int                     passa_a_visao=
                                       vz___[cria];                         passa_a_visao<
                                    ___qwerty[cria                             ];++
                                 passa_a_visao){const unsigned short*cria_vz_=foda_____+
                               _____fodase[                                         passa_a_visao]
                             ;struct                                                  foda_fodase
                            y__;int                                                    ____foda=
                          cria_crl_(___,                                                 cria_vz_);y__.
                         passa_a_visao=                                                   passa_a_visao;
                        y__.
                        ______passa_a_visao
                       =passa_a_visao;y__._foda_vz=0;y__.foda_vz_=0;for(unsigned int _____=0;____foda&&
                        _____<2U*_slc;                                                     ++_____){
                        unsigned int                                                       foda____=___->
                         __y[_____].                                                      foda-cria;
                          unsigned int                                                   _____crl=
                            foda____>0?
                             foda_passa_a_visao_
                               (_____,                                              cria_vz_):0U;
                                 for(unsigned int __fodase=1;____foda&&__fodase<foda____;++
                                    __fodase){int                              vz=______cria(
                                       &___->__y[                           _____],cria+
                                         __fodase);if(                    vz!=cria______
                                            &&(unsigned                int)vz%2U==0){
                                                ____foda=          _fodase_y(&y__
                                                   ,_y_e(_____crl,__fodase),
                                                      _y_e(_____crl,
                                                         __fodase-1U));}
                                                      }}if(____foda){if(
                                                   e____>=_foda_qwerty){
                                                __qwerty=1;        return 0;}
                                            slc_qwerty[                e____]=y__;++
                                         e____;++                         _cria_vz;}}
                                       return                               _cria_vz;}
                                    static                                     unsigned int
                                 y__cria(const struct ___*___,unsigned int _____,unsigned int
                               passa_a_visao,                                       unsigned int
                             fodase_y_){                                              unsigned int
                            cria=___->y_;                                              unsigned int
                          slc_passa_a_visao
                         [
                        passa_a_visao_y
                        ];while(                                                           fodase_y_+1U<
                       cria){passa_a_visao=(unsigned int)e_vz[passa_a_visao][______slc[fodase_y_]];++
                        fodase_y_;}
                        _foda_passa_a_visao
                         (___,foda_____                                                   +_____fodase[
                          passa_a_visao]                                                 ,______slc[
                            cria-1U],
                             slc_passa_a_visao
                               );return
                                 slc_passa_a_visao[_____];}static unsigned int __y_vz(const
                                    struct ___*___                             ,unsigned int
                                       _____,unsigned                       int
                                         passa_a_visao,                   const unsigned
                                            short*
                                                ______passa_a_visao
                                                   ){unsigned int foda____=___
                                                      ->__y[_____].foda-___
                                                         ->y_;if(
                                                      foda____==0){return
                                                   y__cria(___,_____,
                                                passa_a_visao,     0);}return
                                            _y_e(
                                         foda_passa_a_visao_
                                       (_____,
                                    ______passa_a_visao
                                 ),foda____-1U);}static int _cria_qwerty(const struct ___*___,
                               unsigned int _                                       ,unsigned int
                             cria_qwerty_,                                            unsigned int
                            _cria_passa_a_visao
                          ){unsigned int                                                 _slc=___->_slc
                         ;unsigned int                                                    cria=___->y_;
                        unsigned int                                                       __y=2U*_slc;
                        unsigned int                                                       _fodase_e[
                       passa_a_visao_y];unsigned int cria_passa_a_visao_[passa_a_visao_y];for(unsigned int
                        passa_a_visao=                                                     vz___[_+1U];
                        passa_a_visao<                                                     ___qwerty[_+1U
                         ];++                                                             passa_a_visao)
                          {foda_crl[                                                     passa_a_visao]
                            = -1;}for(                                                 unsigned int y
                             =cria_qwerty_;                                           y<
                               _cria_passa_a_visao
                                 ;++y){foda_crl[slc_qwerty[y].passa_a_visao]=(int)y;}for(
                                    unsigned int                               ______=
                                       foda_cria_(_,                        cria);______<
                                         10U;++______){                   unsigned int
                                            fodase_e_=                 e____;
                                                ______slc[_]=(     unsigned char)
                                                   ______;for(unsigned int
                                                      passa_a_visao=vz___[_
                                                         ];passa_a_visao
                                                      <___qwerty[_];++
                                                   passa_a_visao){int
                                                qwerty______=      e_vz[
                                            passa_a_visao]             [______];
                                         struct                           foda_fodase
                                       y__;const                            unsigned short
                                    *_fodase_foda;                             int ____foda=1
                                 ;if(qwerty______<0||foda_crl[qwerty______]<0){continue;}if(
                               foda_qwerty_==                                       0){__qwerty=1;
                             return-1;}--                                             foda_qwerty_;
                            y__=slc_qwerty                                             [foda_crl[
                          qwerty______]]                                                 ;y__.
                         passa_a_visao=                                                   passa_a_visao;
                        _fodase_foda=                                                      foda_____+
                        _____fodase[                                                       y__.
                       ______passa_a_visao];_foda_passa_a_visao(___,foda_____+_____fodase[passa_a_visao],
                        ______,                                                            _fodase_e);if(
                        _+1U<cria){
                         _foda_passa_a_visao
                          (___,foda_____                                                 +_____fodase[(
                            unsigned int)                                              qwerty______],
                             ______slc[_+1U                                           ],
                               cria_passa_a_visao_
                                 );}for(unsigned int _____=0;____foda&&_____<__y;++_____){const
                                    struct vz____*                             _vz_y= &___->
                                       __y[_____];int                       vz=______cria(
                                         _vz_y,_);if(vz                   !=cria______&&
                                            (unsigned int)             vz%2U==1U&&_<
                                                _vz_y->y____){     unsigned int
                                                   y_vz__=_+1U<cria?
                                                      cria_passa_a_visao_[
                                                         _____]:_y_e(
                                                      foda_passa_a_visao_(
                                                   _____,_fodase_foda),0);
                                                ____foda=          _fodase_y(&y__
                                            ,y_vz__,                   _fodase_e[
                                         _____]);}}if(                    ____foda&&_==0
                                       ){for(unsigned                       int _____=0;
                                    ____foda&&                                 _____+1U<__y;
                                 ++_____){int vz=______cria(&___->__y[_____],0);if(vz!=
                               cria______&&(                                        unsigned int)
                             vz%2U==0){                                               ____foda=
                            _fodase_y(&y__                                             ,_fodase_e[
                          _____],__y_vz(                                                 ___,_____+1U,
                         passa_a_visao,                                                   _fodase_foda))
                        ;}}}if(!                                                           ____foda){
                        continue;}if(                                                      e____>=
                       _foda_qwerty){__qwerty=1;return-1;}slc_qwerty[e____]=y__;++e____;}if(e____>
                        fodase_e_){int                                                     e__;if(_==0){
                        return 1;}e__=                                                     _cria_qwerty(
                         ___,_-1U,                                                        fodase_e_,
                          e____);if(e__                                                  !=0){return
                            e__;}e____=                                                fodase_e_;for(
                             unsigned int                                             passa_a_visao=
                               vz___[_+1U];                                         passa_a_visao<
                                 ___qwerty[_+1U];++passa_a_visao){foda_crl[passa_a_visao]= -1;}
                                    for(unsigned                               int y=
                                       cria_qwerty_;y                       <
                                         _cria_passa_a_visao
                                            ;++y){foda_crl             [slc_qwerty[y]
                                                .passa_a_visao     ]=(int)y;}}}
                                                   return 0;}static int y__vz(
                                                      const struct ___*___)
                                                         {unsigned int
                                                      cria=___->y_;unsigned
                                                   int fodase_foda_;
                                                foda_qwerty_=      __y_qwerty;
                                            fodase_foda_=              y_cria__(___);
                                         if(__qwerty){                    return-1;}if(
                                       fodase_foda_==                       0){return 0;}
                                    return                                     _cria_qwerty(
                                 ___,cria-1U,0,fodase_foda_);}static int y_qwerty__(struct ___*
                               ___){const                                           struct e*
                             ____fodase= &                                            qwerty_->
                            _____foda;                                                 struct e __vz;
                          ___->crl_vz=0;                                                 if(!qwerty_->
                         e_cria){return                                                   1;}if(___->y_<
                        ____fodase->                                                       ____){return 0
                        ;}if(___->y_>                                                      ____fodase->
                       ____){return 1;}___e(____fodase,&__vz);if(___->qwerty_____<qwerty_->crl_slc){slc___
                        (&__vz,1UL,&                                                       __vz);if(__vz.
                        ____!=___->y_)                                                     {return 0;}}
                         ___->crl_vz=1;                                                   for(unsigned
                          int _=0;_<__vz                                                 .____;++_){___
                            ->crl_qwerty[_                                             ]=__vz.cria[_]
                             ;}return 1;}                                             static void
                               vz_y_(struct                                         ___*___){
                                 unsigned int cria=___->y_;unsigned int _slc=___->_slc;if(!
                                    y_qwerty__(___                             )){return;}
                                       _passa_a_visao_qwerty
                                         (_slc);slc_y=0                   ;slc_e=0;
                                            foda_y_();for(             unsigned int y
                                                =0;y<______y;      ++y){qwerty___
                                                   [y]=0;}for(unsigned int crl
                                                      =1;crl<_slc;++crl){
                                                         qwerty___[crl-
                                                      1U]=(unsigned short)
                                                   crl;}qwerty___[y______]=___
                                                ->crl_vz?          y__qwerty:
                                            foda_slc_;                 vz___[0]=0;
                                         _slc_passa_a_visao
                                       (1U);if(
                                    slc_passa_a_visao_
                                 ()!=0){__qwerty=1;return;}___qwerty[0]=1;for(unsigned int _=0;_
                               <cria;++_){                                          unsigned int
                             __y_passa_a_visao
                            =foda_cria_(_,                                             cria);foda_y_(
                          );
                         _slc_passa_a_visao
                        (___qwerty[_]-                                                     vz___[_]);
                        vz___[_+1U]=                                                       slc_y;for(
                       unsigned int passa_a_visao=vz___[_];passa_a_visao<___qwerty[_];++passa_a_visao){
                        const unsigned                                                     short*
                        cria_____=                                                         foda_____+
                         _____fodase[                                                     passa_a_visao]
                          ;unsigned int                                                  fodase_____=
                            y__foda(___,_,                                             cria_____)& ~(
                             (1U<<
                               __y_passa_a_visao
                                 )-1U);for(unsigned int ______=0;______<10U;++______){e_vz[
                                    passa_a_visao]                             [______]= -1;}
                                       while(                               fodase_____!=0
                                         ){unsigned int                   ______=(
                                            unsigned int)              __builtin_ctz(
                                                fodase_____);      fodase_____&=
                                                   fodase_____-1U;if(!
                                                      __y_fodase(___,_,
                                                         cria_____,
                                                      ______)){continue;}
                                                   e_vz[passa_a_visao][______]
                                                =
                                            slc_passa_a_visao_
                                         ();if(e_vz[                      passa_a_visao]
                                       [______]<0){                         return;}}}
                                    ___qwerty[_+1U                             ]=slc_y;if(
                                 ___qwerty[_+1U]==vz___[_+1U]){return;}}if(qwerty_->e_____&&
                               qwerty_->___vz                                       ){if(y__vz(___
                             )!=1){return;}                                           }else if(!
                            y_slc__(___)){                                             return;}if(
                          passa_a_visao_e
                         ){for(unsigned                                                   int _=cria;_>0
                        ;--_){unsigned                                                     char _vz_e=
                        ______slc[_-1U                                                     ];unsigned
                       char vz_e_=e_vz_[_-1U];if(_vz_e!=vz_e_){if(_vz_e>vz_e_){return;}break;}if(_==1U&&
                        ___->                                                              qwerty_____>=
                        _e_qwerty){                                                        return;}}}
                         passa_a_visao_e
                          =1;_e_qwerty=                                                  ___->
                            qwerty_____;                                               for(unsigned
                             int _=0;_<cria                                           ;++_){e_vz_[_]
                               =______slc[_];                                       }}static
                                 unsigned short _vz_foda[e_passa_a_visao][2][_fodase_crl];static
                                    unsigned char                              fodase_crl_[
                                       e_passa_a_visao
                                         ][2][                            _fodase_crl];
                                            static                     unsigned int
                                                cria_y;static      int cria_e;
                                                   static unsigned int
                                                      y_passa_a_visao__(
                                                         unsigned int
                                                      crl){struct e
                                                   ____fodase;slc___(&qwerty_
                                                ->_____foda,       crl,&
                                            ____fodase);if             (____fodase.
                                         ____!=cria_y){                   return 10U;}
                                       return                               ____fodase.
                                    cria[                                      ____fodase.
                                 ____-1U];}static unsigned short vz_foda_(unsigned int cria_foda
                               ,unsigned int                                        __slc){
                             unsigned short                                           fodase_=0;for(
                            unsigned int                                               ______=
                          cria_foda;                                                     ______<=__slc;
                         ++______){                                                       fodase_|=(
                        unsigned short                                                     )(1U<<______);
                        }return                                                            fodase_;}


    static              unsigned short                             y__passa_a_visao(    unsigned int     y_,unsigned int crl
    ,unsigned int       foda____){if(   foda____==    0){          unsigned int         cria_foda=y_==   1U&&crl==0?2U:1U;if
    (cria_e){           unsigned int                               _fodase_slc=                          y_passa_a_visao__(
    crl);if(            _fodase_slc>9U  ){return 0    ;}if(        _fodase_slc>         cria_foda){      cria_foda=
    _fodase_slc;}}      return          vz_foda_(     cria_foda,   9U);}return crl==0   ?0:(unsigned     short)(1U<<1);}
    static              unsigned short  __e_y(        unsigned     int crl,unsigned     int qwerty__,    unsigned int
    fodase__){          unsigned int    y_=cria_y;    unsigned     int y_e_=fodase__+   1U-              __passa_a_visao;
    struct e            crl_____;       struct e      _____slc;    struct e __crl;      struct e e___;   struct e foda_slc;
    struct e            foda_cria;      unsigned      int ___crl   =y_+fodase__;        unsigned short   fodase_=0;if(
    fodase_crl_[        crl][qwerty__]  [y_e_]){      return       _vz_foda[crl][       qwerty__][y_e_   ];}__e(&e___,1UL);
                                                                   passa_a_visao____(   &crl_____,y_-    1U);slc___(&
    crl_____,crl,&      crl_____);if(   cria_e){      slc___(&     qwerty_->_____foda   ,crl,&__crl);    if(crl__(&__crl,&
    crl_____)>0){       ___e(&__crl,&   crl_____);    }}           passa_a_visao____(   &__crl,y_+       qwerty__-1U);if(
    crl__(&__crl,&      crl_____)>0){   ___e(&        __crl,&      crl_____);}                           passa_a_visao____(&
    _____slc,y_);       slc__(&         _____slc,&    e___,&       _____slc);slc___(&   _____slc,crl,&   _____slc);
                                                                   passa_a_visao____(   &__crl,y_+       qwerty__);slc__(&
    __crl,&e___,&       __crl);if(      crl__(&       __crl,&      _____slc)<0){___e(   &__crl,&         _____slc);}if(crl__
    (&crl_____,&        _____slc)<=0&&  ____y(&       crl_____,    _qwerty,&foda_slc)   &&____y(&        _____slc,_qwerty,&
    foda_cria)){                                                   passa_a_visao____(   &__crl,___crl-   1U);if(crl__(&__crl
    ,&foda_slc)>0)      {___e(&__crl,&  foda_slc);    }            passa_a_visao____(   &__crl,___crl)   ;slc__(&__crl,&e___
    ,&__crl);if(        crl__(&__crl,&  foda_cria)    <0){___e(&   __crl,&foda_cria);   }if(crl__(&      foda_slc,&foda_cria
    )<=0){fodase_=      vz_foda_(       foda_slc.     cria[        foda_slc.____-1U],   foda_cria.cria   [foda_cria.____-1U]
    );}}_vz_foda[       crl][qwerty__]  [y_e_]=       fodase_;     fodase_crl_[crl][    qwerty__][y_e_   ]=1;return fodase_;
    }static int         _vz_fodase(     const         struct ___   *___,unsigned int    crl,unsigned     int qwerty__,
    unsigned int        fodase__){for(  unsigned      int          _____qwerty=0;       _____qwerty<2U   ;++_____qwerty){
    const struct                        vz____*                    _____= &___->__y[                     2U*crl+_____qwerty]
    ;unsigned                           short                      vz_fodase_=                           _____qwerty==0?
    __e_y(crl,                          qwerty__,                  fodase__):                            y__passa_a_visao(
    ___->y_,crl,                        qwerty__);                 if(vz_fodase_==0){                    return 0;}if(_____
    ->crl_cria<=                        _____->                    y____&&_____->                        y____+1U==_____->



                                              foda&& !(qwerty_->e_slc[______cria(
                                       _____,_____->y____)]&vz_fodase_)){return 0;}}
                                  return 1;}static unsigned int _vz_crl(struct vz____*_____,
                              unsigned int vz_crl_,unsigned int _vz_slc,unsigned int fodase____){
                          _____->y____=_____->              foda-1U-vz_crl_;_____->crl_cria=_____->
                       foda-1U-_vz_slc;_____->                _slc_vz=fodase____;return fodase____+(
                     _vz_slc-vz_crl_+1U);}                    static unsigned int vz_slc_(struct ___*___,
                  unsigned int crl,unsigned                   int e_y__,             unsigned int fodase____){
                struct vz____*slc_= &___->__y[2U            *crl];struct                vz____*_y= &___->__y[2U*
               crl+1U];          unsigned int ___crl=slc_->foda;                          unsigned int vz__=
             ___crl+_y               ->foda;unsigned int cria_fodase=                     qwerty_->foda-fodase____;
            unsigned                   int y=e_y__;slc_->crl_cria=1;                      slc_->y____=0;_y->crl_cria
          =1;_y->                       y____=0;if(cria_fodase>0&&y<                    ___crl){unsigned int __slc=y+
         cria_fodase-                  1U;if(__slc>___crl-1U){__slc=___crl-          1U;}fodase____          =_vz_crl(
        slc_,y,__slc,                fodase____);cria_fodase-=__slc-y+1U;y=__slc+1U;}if(
        cria_fodase>0&&y<        vz__){unsigned int __slc=y+cria_fodase-1U;if(__slc>vz__-1U){                   __slc=
       vz__-1U;}fodase____=_vz_crl(_y,y-___crl,__slc-___crl,           fodase____);}return                     fodase____
       ;}static void _vz_cria(struct        ___*___,unsigned            int crl,unsigned int e__y,           unsigned int
      vz_cria_,unsigned int                  fodase____){if(           crl>=e_passa_a_visao||__qwerty){return;}for(
      unsigned int qwerty__=e__y;           qwerty__<=1U;++qwerty__){for(unsigned int fodase__=vz_cria_;fodase__<=vz_cria_
      +1U&&fodase__<=__passa_a_visao+1U;++fodase__){unsigned int passa_a_visao______;if(fodase__==__passa_a_visao+1U&&
                                                    qwerty__==0){continue;}
                                                    ___->__y[2U*crl].foda=
                                                      ___->y_+fodase__;___
                                                      ->__y[2U*crl+1U].
                                                      foda=___->y_+
                                                      qwerty__;
                                                      passa_a_visao______=
                                                      vz_slc_(___,crl,0,
                                                      fodase____);if(!
                                                      _vz_fodase(___,crl,
                                                      qwerty__,fodase__)){
                                                      continue;}if(
                                                      passa_a_visao______
                                                      ==qwerty_->foda){___
                                                      ->_slc=crl+1U;vz_y_(
                                                      ___);}else{_vz_cria(
                                                      ___,crl+1U,qwerty__,
                                                      fodase__,
                                                      passa_a_visao______)
                                                      ;}}}}static void
                                                      __e_foda(unsigned
                                                      int y_){struct ___*
                                                      ___= &
                                                      passa_a_visao_vz_;
                                                      int fodase_slc_=
                                                      qwerty_->e_cria&&
                                                      qwerty_->_____foda.
                                                      ____==y_;unsigned
                                                      int _vz_qwerty=
                                                      fodase_slc_||y_<7U?
                                                   y_:7U;if(_vz_qwerty!=
                                                   cria_y||fodase_slc_!=
                                                   cria_e){cria_y=_vz_qwerty;
                                                   cria_e=fodase_slc_;for(


                                                  unsigned int crl=0;crl<
                                       e_passa_a_visao;++crl){for(unsigned int foda____=0
                                 ;foda____<2U;++foda____){for(unsigned int y=0;y<_fodase_crl;++
                            y){fodase_crl_[crl][foda____][y]=0;}}}}___->y_=y_;___->__y[1].foda=y_;
                       for(unsigned int fodase__=__passa_a_visao-1U;fodase__<=__passa_a_visao;++fodase__)
                    {unsigned int vz__=2U*y_+fodase__;___              ->__y[0].foda=y_+fodase__;for(
                 unsigned int __foda=0;__foda<vz__;      ++__foda){         unsigned int passa_a_visao______;if
              (__qwerty){return;}___->qwerty_____    =__foda;                  passa_a_visao______=vz_slc_(___,0,
            __foda,0);if(!_vz_fodase(___,0,0,     fodase__            )){        continue;}if(passa_a_visao______==
          qwerty_->foda){___->_slc=1;vz_y_(     ___);}    else{                    _vz_cria(___,1,0,fodase__,
         passa_a_visao______);}}}}static      void     slc_crl_(struct      _____e  *_e,const char*_fodase,unsigned int
       foda){_e->foda=foda;for(unsigned int  y=0;y  <foda;           ++y){_e  ->     e_slc[y]=(unsigned short)(1U<<(
      _fodase[y]-'0'));}_e->e_____=0;_e->                                             qwerty_vz=0;_e->qwerty_passa_a_visao
     =99;_e->___vz=0;_e->e_cria=0;_e->                   crl_slc=0;__e(   &_e    ->    _____foda,0UL);}static void
     _slc_cria(struct _____e*_e,unsigned   int                                         cria___,unsigned int cria__,unsigned
    int passa_a_visao__,int ___vz){                                                     unsigned short vz_qwerty_=0;unsigned
    short _vz_passa_a_visao=0;for(                                                      unsigned int slc=cria__;slc<=
    passa_a_visao__&&slc<=99U;++slc){                                                   vz_qwerty_|=(unsigned short)(1U<<(
    slc/10U));_vz_passa_a_visao|=(                                                      unsigned short)(1U<<(slc%10U));}_e->
     foda=2U*cria___;for(unsigned int y=0  ;y<   _e->  foda;        ++y){  _e->        e_slc[y]=y%2U==0?vz_qwerty_:
     _vz_passa_a_visao;}_e->e_____=1;_e->                qwerty_vz=                    cria__;_e->qwerty_passa_a_visao=
      passa_a_visao__;_e->___vz=___vz;_e->                  e_cria=0    ;_e->         crl_slc=0;__e(&_e->_____foda,0UL);}
       static void _e_vz(const struct __*__  ,      const            struct          _____e*_e,struct ___slc*_crl){
         unsigned int _fodase_cria=1;                  unsigned int                 _y_foda=_e->foda+1U;_crl->_cria=0;
          _crl->__qwerty=0;_crl->qwerty_____=   0;__e(    &_crl->_y,      0UL);    if(_e->foda==0||_e->foda>foda___){
            return;}if(_e->e_cria){unsigned int   y_foda_=            _e->       _____foda.____;if(y_foda_>
              _fodase_cria){_fodase_cria=y_foda_;    }if(y_foda_+1U>_y_foda    ){_y_foda=y_foda_+1U;}}if(_y_foda>
                 vz_passa_a_visao_){_crl->__qwerty=1     ;return;}          qwerty_=_e;_qwerty=__->_qwerty;
                    __passa_a_visao=__->__passa_a_visao;               __qwerty=0;cria_y=0;cria_e= -1;for(
                       unsigned int ______=0;______<10U;++______){passa_a_visao_foda[______]=0;
                            passa_a_visao_fodase[______]=0;}e_qwerty_=0;_e_passa_a_visao=0;if(_e->
                                 e_____){for(unsigned int slc=_e->qwerty_vz;slc<=_e->
                                       qwerty_passa_a_visao&&slc<=99U;++slc){
                                                  passa_a_visao_foda[slc%10U]


|=(unsigned short)(1U<<(slc/10U));passa_a_visao_fodase[slc/10U]|=(unsigned short)(1U<<(slc%10U));e_qwerty_|=(unsigned short)(1U
<<(slc%10U));                                                                    _e_passa_a_visao|=(         unsigned short)(1U
<<(slc/10U));}}    for(                        unsigned int  __cria=0;     __cria  <10U;++__cria){for  (       unsigned int
fodase_=0;fodase_  <1024U  ;++                 fodase_){     _foda_crl[    __cria  ][fodase_]=0;}}             foda_y_();for(
unsigned int cria        =                                                         _fodase_cria;cria           <=_y_foda;++cria)
{passa_a_visao_e=  0;__e_foda(   cria);  if(__qwerty)  {_crl->                     __qwerty=1;return;  }if(    passa_a_visao_e){
_crl->_cria=1;     _crl->                qwerty_____=  _e_qwerty;    _crl  ->_y.   ____=cria;for(              unsigned int _=0;
_<cria;++_){_crl   ->_y.cria[_]  =e_vz_  [_];        }             return  ;}}}    static void                 slc_cria_(const
struct __*__,const char*_fodase,unsigned int foda,struct ___slc*_crl){static struct _____e _e;if(foda==0||foda>foda___){_crl->

_cria=0;_crl->__qwerty=0;return;}slc_crl_(&_e,_fodase,foda);_e_vz(__,&_e,_crl);}struct _fodase{char cria[foda___+1U];unsigned
int foda;};struct fodase_cria_{                                                  unsigned      int cria__;unsigned int
passa_a_visao__;unsigned int                                 ____qwerty;   int                   cria_crl;};struct qwerty{int
_cria;int foda_vz;int                                        _fodase_vz;                         unsigned int __foda;struct e vz
;struct e cria_slc;struct e _y;  };      static    void                                          slc_____(unsigned long slc){
char _foda[24];fodase______(slc  ,_foda  );fodase  (_foda);}static   void                        _y_fodase(unsigned int slc){
char _foda[3];_foda[0]=(char)('0'  +   slc/10U);   _foda[1]=(char)(  '0'+  slc%    10U)  ;_foda  [2]='\0';fodase(_foda);}static
void y_e(const struct e*foda_){char  _foda[                                                    ____passa_a_visao+1U];unsigned
int foda=______fodase(foda_,_foda);for(unsigned int y=0;y<foda;++y){if(y>0&&(foda-y)%3U==0){fodase(".");}y_crl(_foda+y,1);}if(


                foda>15U){char __fodase[8];fodase(" (c"                "erca de ");   __fodase[0]=_foda[0];       __fodase[1
      ]=',';    __fodase[2]=            _foda[1];__fodase[3]='\0';      fodase(__fodase);       fodase(" × 10^");
   slc_____(        foda-1U)                          ;fodase(")");}}static                long           fodase_vz_    (char*
crl_,unsigned long y_cria,int     e_foda__){long                         e__=            _fodase_passa_a_visao(crl_,
     y_cria);if(e__==  -1&&e_foda__){        return-1;}if(e__== -1){fodase("\nA entra"  "da terminou antes da resposta. Ence"
 "rrando.\n")        ;                                cria_passa_a_visao(1);}if(e__== -   2){fodase("\nFalha ao ler "
     "a entrada. Encerrando.\n")         ;cria_passa_a_visao(2);}return e__;          }static unsigned long y_fodase_(
                    const char*y_foda,unsigned long ____fodase,     unsigned long _qwerty_y){char y___
                         [foda_qwerty];       for(;;){unsigned long  slc=0;unsigned int _fodase_qwerty=0;int y_fodase=0;
        fodase(           y_foda);if(fodase_vz_(y___,                 foda_qwerty,0)== -3){fodase("  Linha longa d"
               "emais. Ten"          "te de nov"  "o.\n");continue;}for(unsigned int y=0;            y___[y]!='\0';++y){char
               ___fodase=y___[y];if(         ___fodase               ==' '||         ___fodase=='\t'){continue;}if(
            ___fodase<'0'||___fodase>     '9'||_fodase_qwerty>=6U){              y_fodase=1;break;}slc=slc*10UL+(
          unsigned long)(___fodase-'0');++                           _fodase_qwerty;}          if(!y_fodase&&_fodase_qwerty>0
                 &&slc>=                     ____fodase&&slc<=            _qwerty_y){return slc;}fodase("  Preciso de "
      "um int"             "eiro entre ");slc_____(____fodase        );fodase(" e ");slc_____(_qwerty_y);
               fodase(", só algarismos. Tente de no"               "vo.\n");}}static int e__foda(const char*
             y_foda){char    y___[foda_qwerty];for(;;){unsigned int y=0;fodase(           y_foda);if(
        fodase_vz_(y___,foda_qwerty,0)== -3){                 fodase("  Linha longa demais. Te"    "nte de novo.\n");
                   continue;}while(      y___[y]==' '||y___[y]=='\t'){++y;}if(              y___[y]=='s'||y___[y]=='S'){
           return 1;}if(     y___[y]=='n'||               y___[y]=='N'){return 0;}fodase("  Respon"               "da s ("
 "sim) ou n (não). T"   "ente de novo"       ".\n");}}static void qwerty_y_(const char*    y_foda,int
      _qwerty_e,struct _fodase*        _fodase){char y___[foda_qwerty];for(;;){                           unsigned int
                foda=0;int y_fodase=      0;fodase(y_foda);if(                                fodase_vz_(y___,
                          foda_qwerty,!_qwerty_e)==         -3){fodase("  Linha longa "      "demais. Tente de "
         "novo.\n");continue;}for(unsigned int        y=0;y___[y]!='\0';                       ++y){char          ___fodase=y___
      [y];if(___fodase==' '||          ___fodase==        '\t'||___fodase                  =='.'||___fodase=='-'||___fodase
         ==','){                      continue;}if (___fodase<'0'||___fodase>'9'){y_fodase= 1;break;}if(foda>=
  foda___){       y_fodase=2;break;}      _fodase->cria[foda]=            ___fodase;++foda;}if       (                y_fodase==
    1){fodase("  Só al"          "garismos, por favor (es"     "paços e pontos são ignorados). Tente d"                "e novo."
 "\n");continue;} if(y_fodase==2){     fodase("  A referência pode t"        "er no máximo ");slc_____(     foda___);fodase(
    " algar"        "ismos. Tent"   "e de novo.\n");continue;}if (foda==0&&_qwerty_e)                            {fodase("  Est"
     "a referên"           "cia é obriga"       "tória. Tente de novo.\n"     );continue;}_fodase->cria[foda]='\0';
   _fodase->foda=foda;          return;}}      static int         qwerty_e_(                       const struct __*__,unsigned
        int foda,struct qwerty*qwerty){if(!    qwerty->foda_vz){if(!e_y(__,&           qwerty->_y,&qwerty->vz)|| !slc___(&
     qwerty->vz,qwerty->__foda,&qwerty->vz)){         return 0;}}else{__e(&qwerty->vz,1UL+                qwerty->
               __foda);}return slc___(&qwerty->vz,foda-1U,&qwerty->cria_slc);}                   static void
     _qwerty_foda(const struct __*__,unsigned           long vz,unsigned int foda,                   struct          qwerty*
             qwerty){int            ___foda;qwerty->_cria=0;qwerty->             _fodase_vz=1;__e(&qwerty->vz,vz);___foda=
     fodase_vz(__,&qwerty->       vz,&qwerty->_y,&             qwerty->__foda);if(___foda<0){return;}    qwerty->
foda_vz=         ___foda==0;if(qwerty->foda_vz){__e(&qwerty->_y            ,1UL);}qwerty->_cria=             qwerty_e_
            (__,foda,               qwerty);}static void qwerty_foda_(           const          struct __*     __,const
    struct       ___slc*_crl,         unsigned                       int foda,struct qwerty*qwerty){qwerty->     _cria=0;
          qwerty->foda_vz=0; qwerty->_fodase_vz=0;if(_crl->__qwerty){fodase  ("  (a busca analítica esgo"               "tou a "
  "memória reservada; sem resposta)\n")    ;return;}if(!_crl->_cria){            return;}___e(&      _crl->_y,&qwerty->_y)
 ;qwerty->__foda=_crl->                      qwerty_____                      ;qwerty->_cria=qwerty_e_(__,foda
                     ,qwerty);}static void _qwerty_fodase(const struct __*__,const        struct _fodase*
_fodase,const struct      fodase___*e______,struct qwerty*qwerty      ){struct ___slc ___slc;if(          e______->
    _cria){_qwerty_foda(__,e______->vz,_fodase->foda,qwerty);return;}                     slc_cria_(__,
_fodase->                          cria,_fodase->foda,&___slc);qwerty_foda_(__, &___slc,_fodase->foda,qwerty);}static
                  void              __e_fodase(const struct __*__,const         struct       fodase_cria_*       _vz,const
            struct e*                 _____cria,struct qwerty*qwerty){static   struct _____e _e;struct fodase___
   e______;struct ___slc ___slc;unsigned                   int foda=2U*_vz->____qwerty   ;unsigned long         ____vz=0;
                             int ___foda;qwerty->_cria=0;e______._cria=0;e______.vz=0;if(vz_crl(_____cria,           &____vz)){
                                  _crl_passa_a_visao(__,                       ____vz,                 _vz->cria__,
       _vz->            passa_a_visao__,_vz->____qwerty,!_vz->cria_crl,                qwerty_fodase_,&e______);}
 _slc_cria(&_e,_vz->               ____qwerty,_vz->cria__,_vz->                                passa_a_visao__,!_vz->
  cria_crl)  ;___foda=                                fodase_vz(             __,_____cria,&_e.
    _____foda,&_e.crl_slc);if(___foda< 0){return;}if(___foda==0){__e(&_e.                                    _____foda,2UL);
     _e.crl_slc=0;}_e.e_cria=1;if(e______.      _cria){                   _qwerty_foda(__,e______.vz,foda,qwerty);
return;}_e_vz(__,&_e,&___slc);     qwerty_foda_(__,&            ___slc,foda,  qwerty);}static     void
     e_fodase__(                       const struct __*      __,const struct e*    vz,unsigned int foda){char _y_crl[
foda___+2U*y_crl_+1U];struct e fodase_qwerty;struct            e _qwerty_crl;unsigned long ______foda=y_crl_;
     unsigned long       ____vz;if(vz_crl(vz,&____vz)&&       ____vz-1UL<______foda){______foda=
    ____vz-1UL;}__e(&                    _qwerty_crl,______foda);slc__(vz  ,&_qwerty_crl,&fodase_qwerty);if(!qwerty_e(
   __,&fodase_qwerty,(unsigned           int)______foda+foda+y_crl_,             _y_crl)){fodase("(trecho"
         " indisponível)\n");return;}fodase  (______foda>0?"…":"");y_crl(_y_crl,                      ______foda
     );fodase("["                    );y_crl(_y_crl +______foda,foda)  ;fodase("]");y_crl(                 _y_crl+
         ______foda+foda,                            y_crl_);fodase("…\n");}static void           e__fodase      (const
      struct __*__,const      struct qwerty*      qwerty){struct e _y;struct e       qwerty_crl_                   ;unsigned
                      int __e_crl;       unsigned int _qwerty_slc=0             ;char fodase_cria[____passa_a_visao+1U];
char y_passa_a_visao[      ____passa_a_visao+1U]          ;int qwerty_slc_=fodase_vz(__,&                      qwerty->cria_slc
              ,&                     qwerty_crl_,&   __e_crl);if(qwerty_slc_<0    ){return;}fodase("   Blocos atravessado"
"s ((t·m) ⊕ m):\n");if(qwerty->    foda_vz){fodase       ("     prefixo t = ");                             fodase(__->
  y_qwerty);fodase("\n");if(qwerty_slc_==0)                           {return;}__e(&_y,2UL);}else{___e(&qwerty->_y,&_y
                  );}while(crl__(&_y,&qwerty_crl_)<=           0){if(             _qwerty_slc>=   e_crl__){fodase("     …"
     "\n");return;}if(!crl_vz_(__,&       _y,fodase_cria,                    y_passa_a_visao)){return;}              fodase(
                   "     m = ");fodase(                y_passa_a_visao);fodase(": ");fodase(
         fodase_cria);fodase(" ⊕ ");fodase   (
   y_passa_a_visao                               );fodase("\n");slc___(&  _y,1UL,&_y);++_qwerty_slc;}}static void
_qwerty_cria(                  const struct                 __*__,const struct qwerty*qwerty,      unsigned int foda){struct
      e slc_;fodase("   Posição de fim: ");y_e(&                  qwerty->cria_slc);       fodase("\n   Começa ");if(
             qwerty->foda_vz){fodase(                     "no prefixo t, algarismo"              " ");slc_____(qwerty->__foda+
                  1UL);}else{char _foda[____passa_a_visao+1U];             fodase("no bloco m = ");
 ______fodase(          &qwerty->_y,_foda);fodase(_foda);                     fodase(", al"        "garismo ");
 slc_____(qwerty->__foda+1UL);fodase(          " do bloco"          " (");____y(&   qwerty->_y,__->_qwerty,&slc_
     );fodase(qwerty->__foda<slc_.                     ____?"den"       "tro do produto t·m)":          "dentro"
       " do multiplicador m)");}fodase("\n  "       " Achada por: ")               ;fodase(qwerty->           _fodase_vz?
       "percurso dire"   "cto da sequência":"busca analítica (além do alcance do percurso)");fodase(
                     "\n   Trecho: "    );e_fodase__(__,&qwerty->         vz,foda);e__fodase(__,qwerty);}static void
                        qwerty_cria_(const struct __*__,                       const char*             y_foda,
          const struct _fodase*_fodase,const struct qwerty*qwerty){fodase("\n");fodase(y_foda       );fodase(": "
           );fodase(        _fodase->cria);fodase(" (");slc_____(_fodase->foda);          fodase(" algarismos)\n");if(!
   qwerty->   _cria){           fodase("   Não localizada"         " dentro "         "dos limites deste apparelho"
               ".\n");return;}fodase(           "   Posição de"          " início (contad"           "a a partir de 1): ");y_e
    (&qwerty->vz);fodase("\n");      _qwerty_cria(__,qwerty,         _fodase->foda);}static void e__crl(const
              char*cria_vz,unsigned    int                 ____qwerty){unsigned int _y_slc[100    ];int
       fodase_qwerty_=0;for(unsigned int slc=0 ;slc<100U;++slc){                              _y_slc[slc]=0;}for(
         unsigned int y=0;y<____qwerty          ;++y){unsigned int slc=10U*( unsigned int)(cria_vz[2U*y]-'0')+(
 unsigned int)                    (cria_vz[2U*y+1U]-'0');if(y>0){fodase(" ");}_y_fodase(      slc);++_y_slc[slc];}fodase("\n");
         for(unsigned int slc=0;                slc<100U;++slc){if(_y_slc[slc]>1U){                   fodase(
             fodase_qwerty_?", ":"   Nú"   "meros repeti"                 "dos: ");_y_fodase(   slc);fodase(" (");slc_____(
                         _y_slc[              slc]);    fodase(     " vezes)")            ;fodase_qwerty_
       =1;}}if(fodase_qwerty_){fodase("\n");}}                              static void __e_slc(const           struct __*
                     __,const struct                fodase_cria_*_vz,const              struct qwerty*qwerty____,const
  struct qwerty*                      ___passa_a_visao){struct e  cria_qwerty;struct e _____cria;
                struct e ______crl;struct qwerty                                                    foda_passa_a_visao;char
                  cria_vz[foda___+1U];unsigned int foda=2U*_vz->       ____qwerty;int                          _qwerty_vz=crl__(
        &___passa_a_visao->  vz,&qwerty____->vz)            >=0;fodase("\nIntervalo entre a 1ª e a 2ª\n") ;if(_qwerty_vz){slc__
          (&                                            ___passa_a_visao->vz,                 &qwerty____->vz,&
 cria_qwerty);fodase("   Di"        "stância entre os inícios (início da 2ª − "                  "início da 1ª): ");}
else{slc__(&                 qwerty____->vz,&          ___passa_a_visao->vz,&                   cria_qwerty)
                 ;fodase(     "   A 2ª vem ANTES da 1ª. Di"                  "stância entre "  "os inícios: −");}y_e(
 &cria_qwerty);fodase("\n   Algarismos entre o fim da 1ª e o"                                        " início da 2ª: ");if(
  crl__(&___passa_a_visao->vz,&qwerty____->cria_slc)>0){struct e y_slc_;struct e                                e___;__e(&
       e___,1UL);slc__(&___passa_a_visao->vz,&           qwerty____->cria_slc,&y_slc_);            slc__(&
            y_slc_,&e___,&y_slc_);y_e(&y_slc_);fodase  ("\n");}else{                        fodase("nenhum "
       "(as duas se sobrepõem ou a 2ª"  " vem antes)\n");}fodase("\nTer"                         "ceira sequência: ");slc_____
             (_vz->              ____qwerty);fodase(" números de 2 ca"             "sas entre ");_y_fodase(_vz->
              cria__);fodase(" e ");_y_fodase(_vz->                       passa_a_visao__);                 fodase(_vz->
   cria_crl?     ", repetição permitida\n":", sem "                "repetição"    "\n");if(_qwerty_vz){fodase_foda(&
    ___passa_a_visao->vz,&cria_qwerty,&                               _____cria                        );}else if(!slc__(&
      ___passa_a_visao    ->vz,&cria_qwerty,&         _____cria)||_y_qwerty(&_____cria))                 {fodase("   O iní"
              "cio projetado ca"          "i ante"             "s do primeiro algarismo de F(t); não"       " há ter"
"ceira sequê"             "ncia.\n");return;}                          fodase("   Início projetado (início da 2ª + i"
"ntervalo): ");y_e    (&_____cria);fodase("\n");__e_fodase(__,_vz,&                   _____cria,&
  foda_passa_a_visao)  ;if(!                                                                        foda_passa_a_visao
._cria){                              fodase("   Nenhuma sequência assim f"                 "oi achada dentro do"
              "s limites deste a"            "pparelho.\n");         return;}if(!qwerty_e(__                 ,&
                                       foda_passa_a_visao.vz       ,foda,cria_vz)){fodase("   "                  "Não foi pos"
  "sível extrair a ter"            "ceira sequência.\n");                 return;}fodase("   Primeira sequên"
    "cia válida a partir "                     "daí começa em: ");y_e(&  foda_passa_a_visao.vz);fodase(
           "\n   Dist"       "ância desde o início projetado: ");slc__       (&foda_passa_a_visao.vz,
    &_____cria,&______crl);y_e    (&______crl);fodase("\n "                    "  Sequência: ");e__crl(cria_vz
                    ,_vz->____qwerty);_qwerty_cria(__,&foda_passa_a_visao,foda)              ;}static void e_slc__(const
             struct __*          __){char qwerty_vz_[
 _qwerty_passa_a_visao+1U];struct                                    e e___;__e(&e___,1UL);fodase("\nF(");fodase(
                   __->            y_qwerty);fodase(") = ");if(qwerty_e    (__,&e___,_qwerty_passa_a_visao
       ,qwerty_vz_)){fodase(qwerty_vz_);}                                            fodase("…\n");}__attribute__((
       noreturn,              force_align_arg_pointer))void                                          paizao(void){struct
      __ __;struct _fodase _____vz;                                 struct _fodase slc____;struct
               fodase_cria_ _vz;struct fodase___        qwerty_passa_a_visao_ ;struct                           fodase___
              _passa_a_visao_y;struct qwerty qwerty____;                struct             qwerty ___passa_a_visao;
unsigned long                       passa_a_visao_y_;fodase("TEORE"              "MA DE BRAGA\n""F(t) = t ⊕ (2t ⊕"
                       " 2) ⊕ (3t ⊕ 3) ⊕ (4t ⊕ 4) ⊕ ...\n\n");passa_a_visao_y_=y_fodase_("Número de entrada (ob"
               "rigatório, de 1 a 999): "           ,1UL,e__slc);         _crl_vz(&__,passa_a_visao_y_);
 qwerty_y_           ("Sequência de ref"              "erência 1 (obr"                 "igatória):"   " ",1,&_____vz
   );qwerty_y_("Sequência de refer"      "ência 2 (opcional, Enter para pular): ",0,&             slc____)       ;_vz.cria__
                    =0;_vz.  passa_a_visao__=0;            _vz.____qwerty=0;_vz.                                cria_crl=1;if(
                          slc____.foda>0){_vz.cria__=(unsigned    int)y_fodase_(  "Menor "       "número da 3ª sequê"
      "ncia (2 c"    "asas, ex.: 01): ",0UL,99UL);_vz.                   passa_a_visao__=(
                    unsigned int)                  y_fodase_("Maior número da 3ª sequência "   "(2 casas, ex.: 25): ",_vz.
                     cria__,99UL);_vz.____qwerty=(unsigned int)                    y_fodase_("Quantidad"
   "e de números da 3ª sequência (ex.: 1"                      "5): ",1UL,__e_cria);                 _vz.cria_crl=e__foda(
                            "Pode repetir número na 3ª sequência? (s/n): ");}e_slc__(&__);           _crl_qwerty(&__,
                              _____vz.cria,           _____vz.foda,       slc____.cria,slc____.foda,qwerty_fodase_,
        &                                             qwerty_passa_a_visao_,&
             _passa_a_visao_y);_qwerty_fodase(&__,                               &_____vz,&qwerty_passa_a_visao_,&
            qwerty____);qwerty_cria_(&__,"Sequência de"                              " referência 1",&_____vz,&qwerty____);if(
     slc____.                         foda>0){_qwerty_fodase(&__,&slc____,&                                 _passa_a_visao_y
                            ,&___passa_a_visao);qwerty_cria_ (&__,"Sequência de referência 2",&
                      slc____,&___passa_a_visao);if(qwerty____.                     _cria&&               ___passa_a_visao.
           _cria){__e_slc(&__,&_vz,&qwerty____,&                                        ___passa_a_visao);}}fodase("\n"
            );cria_passa_a_visao             (0);}
