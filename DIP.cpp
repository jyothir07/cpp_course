//Abstraction
class IEngine {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class MPFIEngine : public IEngine {
public:
    void start() override {}
    void stop() override {}
};

class GDIEngine : public IEngine {
public:
    void start() override {}
    void stop() override {}
};

class StallinEngine {

};

class XUV3XO {
    //IEngine* engine = new MPFIEngine(); // donot do this
    // dependency (Abstract)
    IEngine* engine;
public:
    XUV3XO(IEngine* engineArg) : engine{ engineArg } {}
    void drive() {
        this->engine->start();
    }
    void halt() {
        this->engine->stop();
    }
    ~XUV3XO() {
        delete engine;
    }
};


//Car uses engine
// car depends on engine

int main() {
    MPFIEngine napEngine;
    GDIEngine turboEngine;
    XUV3XO car{&napEngine };
    car.drive();
    XUV3XO turboSeries{&turboEngine};
    return 0;
}